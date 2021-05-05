#include "qte.h"
#include "mesh_reconstruction.h"
#include "terrain.h"
#include "sphere.h"
#include "data_structs.h"

MainWindow::MainWindow()
{
	// Chargement de l'interface
	uiw.setupUi(this);

	// Chargement du GLWidget
	meshWidget = new MeshWidget;
	QGridLayout* GLlayout = new QGridLayout;
	GLlayout->addWidget(meshWidget, 0, 0);
	GLlayout->setContentsMargins(0, 0, 0, 0);
	uiw.widget_GL->setLayout(GLlayout);

	terrain = new Terrain();
	domain = MeshReconstruction::Rect3();
	domain.min = Vector(-250, -250, -50);
	domain.size = Vector(500, 500, 100);

	// Creation des connect
	CreateActions();

	meshWidget->SetCamera(Camera(Vector(639, -604, 76), Vector(0.0, 0.0, 0.0)));
}

MainWindow::~MainWindow()
{
	delete meshWidget;
	delete terrain;
}

void MainWindow::CreateActions()
{
	// Buttons
	connect(uiw.boxMesh, SIGNAL(clicked()), this, SLOT(BoxMeshExample()));
	connect(uiw.resetcameraButton, SIGNAL(clicked()), this, SLOT(ResetCamera()));
	connect(uiw.wireframe, SIGNAL(clicked()), this, SLOT(UpdateMaterial()));
	connect(uiw.boxTerrain, SIGNAL(clicked()), this, SLOT(Generate()));
	connect(uiw.boxSelect, SIGNAL(clicked()), this, SLOT(Select()));
	connect(uiw.boxAjout, SIGNAL(clicked()), this, SLOT(Ajouter()));

	// Widget edition
	connect(meshWidget, SIGNAL(_signalEditSceneLeft(const Ray&)), this, SLOT(editingSceneLeft(const Ray&)));
	connect(meshWidget, SIGNAL(_signalEditSceneRight(const Ray&)), this, SLOT(editingSceneRight(const Ray&)));
}

void MainWindow::editingSceneLeft(const Ray&)
{
}

void MainWindow::editingSceneRight(const Ray&)
{
}

void MainWindow::Generate()
{
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return terrain->Signed(pos); },
		domain, 1));
	UpdateGeometry();
}

void MainWindow::Select() {
	uiw.boxParametre_2->setEnabled(false);
	uiw.lineParametre_3->setEnabled(false);
	uiw.labelParametre_2->setText(QString(""));
	uiw.labelParametre_3->setText(QString(""));
	int forme = uiw.selectForm->currentIndex();
	if (forme == 0) {  //Sphere
		uiw.lineParametreA->setEnabled(true);
		uiw.lineParametreB->setEnabled(false);
		uiw.lineParametreC->setEnabled(false);
		uiw.labelParametre->setText(QString("Rayon(int)"));
	}
	else if (forme == 1) {  //Box
		uiw.lineParametreA->setEnabled(true);
		uiw.lineParametreB->setEnabled(true);
		uiw.lineParametreC->setEnabled(true);
		uiw.labelParametre->setText(QString("Vector"));
	}
	else if (forme == 2) {  //Capsule
		uiw.lineParametreA->setEnabled(true);
		uiw.lineParametreB->setEnabled(true);
		uiw.lineParametreC->setEnabled(true);
		uiw.labelParametre->setText(QString("Vector"));
		uiw.boxParametre_2->setEnabled(true);
		uiw.lineParametreA_2->setEnabled(true);
		uiw.lineParametreB_2->setEnabled(true);
		uiw.lineParametreC_2->setEnabled(true);
		uiw.labelParametre_2->setText(QString("Vector"));
		uiw.lineParametre_3->setEnabled(true);
		uiw.labelParametre_3->setText(QString("Rayon(double)"));
	}
	else if (forme == 3) {  //Cone
		uiw.lineParametreA->setEnabled(true);
		uiw.lineParametreB->setEnabled(true);
		uiw.lineParametreC->setEnabled(true);
		uiw.labelParametre->setText(QString("Vector"));
		uiw.boxParametre_2->setEnabled(true);
		uiw.lineParametreA_2->setEnabled(true);
		uiw.lineParametreB_2->setEnabled(false);
		uiw.lineParametreC_2->setEnabled(false);
		uiw.labelParametre_2->setText(QString("height(double)"));
	}
	else if (forme == 4) {  //Ellipsoid
		uiw.lineParametreA->setEnabled(true);
		uiw.lineParametreB->setEnabled(true);
		uiw.lineParametreC->setEnabled(true);
		uiw.labelParametre->setText(QString("Vector"));
	}
	else if (forme == 5) {  //Pyramid
		uiw.lineParametreA->setEnabled(true);
		uiw.lineParametreB->setEnabled(false);
		uiw.lineParametreC->setEnabled(false);
		uiw.labelParametre->setText(QString("height(double)"));
	}
	else if (forme == 6) {  //Torus
		uiw.lineParametreA->setEnabled(true);
		uiw.lineParametreB->setEnabled(true);
		uiw.lineParametreC->setEnabled(false);
		uiw.labelParametre->setText(QString("Vector2"));
	}

}

void MainWindow::Ajouter()
{
	int x = uiw.linePositionX->text().toInt();
	int y = uiw.linePositionY->text().toInt();
	int z = uiw.linePositionZ->text().toInt();
	int rx = uiw.lineRotationX->text().toInt();
	int ry = uiw.lineRotationY->text().toInt();
	int rz = uiw.lineRotationZ->text().toInt();
	int forme = uiw.selectForm->currentIndex();
}

void MainWindow::BoxMeshExample()
{
	meshColor = MeshColor(Mesh(Box(Vector(0), 1)));
	UpdateGeometry();
}

void MainWindow::UpdateGeometry()
{
	meshWidget->ClearAll();
	meshWidget->AddMesh("BoxMesh", meshColor);

	uiw.lineEdit->setText(QString::number(meshColor.GetVertices().size()));
	uiw.lineEdit_2->setText(QString::number(meshColor.VertexIndexes().size()));

	UpdateMaterial();
}

void MainWindow::UpdateMaterial()
{
	meshWidget->UseWireframeGlobal(uiw.wireframe->isChecked());
}

void MainWindow::ResetCamera()
{
	meshWidget->SetCamera(Camera::View(meshColor.GetBox()));
}
