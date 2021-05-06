#include "qte.h"
#include "mesh_reconstruction.h"
#include "data_structs.h"

#include "terrain.h"
#include "boite.h"
#include "capsule.h"
#include "cone.h"
#include "ellipsoid.h"
#include "pyramid.h"
#include "sphere.h"
#include "torus.h"
#include "cylinder.h"
#include "straw.h"

#include "op_rotation.h"
#include "op_translation.h"
#include "op_difference.h"
#include "op_intersection.h"
#include "op_union.h"
#include "op_smooth_difference.h"
#include "op_smooth_intersection.h"
#include "op_smooth_union.h"

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
	domain.size = Vector(500, 500, 200);

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
	connect(uiw.boxReset, SIGNAL(clicked()), this, SLOT(BoxMeshExample()));
	connect(uiw.resetcameraButton, SIGNAL(clicked()), this, SLOT(ResetCamera()));
	connect(uiw.wireframe, SIGNAL(clicked()), this, SLOT(UpdateMaterial()));
	connect(uiw.boxTerrain, SIGNAL(clicked()), this, SLOT(Generate()));
	connect(uiw.boxSelect, SIGNAL(clicked()), this, SLOT(Select()));
	connect(uiw.boxAjout, SIGNAL(clicked()), this, SLOT(Ajouter()));
	
	// Primitives Buttons
	connect(uiw.boxSphere, SIGNAL(clicked()), this, SLOT(AddSphere()));
	connect(uiw.boxBoite, SIGNAL(clicked()), this, SLOT(AddBoite()));
	connect(uiw.boxCapsule, SIGNAL(clicked()), this, SLOT(AddCapsule()));
	connect(uiw.boxCone, SIGNAL(clicked()), this, SLOT(AddCone()));
	connect(uiw.boxEllipsoid, SIGNAL(clicked()), this, SLOT(AddEllipsoid()));
	connect(uiw.boxPyramid, SIGNAL(clicked()), this, SLOT(AddPyramid()));
	connect(uiw.boxTorus, SIGNAL(clicked()), this, SLOT(AddTorus()));
	connect(uiw.boxCylinder, SIGNAL(clicked()), this, SLOT(AddCylinder()));
	connect(uiw.boxStraw, SIGNAL(clicked()), this, SLOT(AddStraw()));

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
		domain, 10));
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

Node* MainWindow::makePrimitive()
{
	int shape = uiw.selectForm->currentIndex();
	switch (shape)
	{
	case 0:
		return new Sphere(
			uiw.lineParametreA->text().toDouble());
		break;
	case 1:
		return new Boite(
			Vector(
				uiw.lineParametreA->text().toDouble(),
				uiw.lineParametreB->text().toDouble(),
				uiw.lineParametreC->text().toDouble()));
		break;
	case 2:
		return new Capsule(
			Vector(
				uiw.lineParametreA->text().toDouble(),
				uiw.lineParametreB->text().toDouble(),
				uiw.lineParametreC->text().toDouble()),
			Vector(
				uiw.lineParametreA_2->text().toDouble(),
				uiw.lineParametreB_2->text().toDouble(),
				uiw.lineParametreC_2->text().toDouble()),
			uiw.lineParametre_3->text().toDouble());
		break;
	case 3:
		/*return new Cone(
			Vector2(
				uiw.lineParametreA->text().toDouble(),
				uiw.lineParametreB->text().toDouble()), 
			uiw.lineParametreA_2->text().toDouble());*/
		break;
	case 4:
		return new Ellipsoid(
			Vector(
				uiw.lineParametreA->text().toDouble(),
				uiw.lineParametreB->text().toDouble(),
				uiw.lineParametreC->text().toDouble()));
		break;
	case 5:
		return new Pyramid(
			uiw.lineParametreA->text().toDouble());
		break;
	case 6:
		return new Torus(
			Vector2(
				uiw.lineParametreA->text().toDouble(),
				uiw.lineParametreB->text().toDouble()));
		break;
	default:
		return nullptr;
	}
}

Node* MainWindow::transformPrimitive(Node* primitive)
{
	double x = uiw.linePositionX->text().toDouble();
	double y = uiw.linePositionY->text().toDouble();
	double z = uiw.linePositionZ->text().toDouble();
	double rx = uiw.lineRotationX->text().toDouble();
	double ry = uiw.lineRotationY->text().toDouble();
	double rz = uiw.lineRotationZ->text().toDouble();

	primitive = new OpRotation(primitive, Vector(rx, ry, rz));
	primitive = new OpTranslation(primitive, Vector(x, y, z));

	return primitive;
}

bool MainWindow::updateTerrain()
{
	Node* primitive = makePrimitive();
	if (primitive == nullptr) return false;
	primitive = transformPrimitive(primitive);

	bool intersectionOperator = uiw.radioButtonIntersection->isChecked();
	bool unionOperator = uiw.radioButtonUnion->isChecked();
	bool differenceOperator = uiw.radioButtonDifference->isChecked();
	bool smoothOperator = uiw.Smooth->isChecked();

	if (intersectionOperator)
	{
		if (smoothOperator)
		{
			terrain = new OpSmoothIntersection(terrain, primitive);
		}
		else
		{
			terrain = new OpIntersection(terrain, primitive);
		}
	}
	else if (unionOperator)
	{
		if (smoothOperator)
		{
			terrain = new OpSmoothUnion(terrain, primitive);
		}
		else
		{
			terrain = new OpUnion(terrain, primitive);
		}
	}
	else if (differenceOperator)
	{
		if (smoothOperator)
		{
			terrain = new OpSmoothDifference(terrain, primitive);
		}
		else
		{
			terrain = new OpDifference(terrain, primitive);
		}
	}
	else
	{
		return false;
	}

	return true;
}

void MainWindow::Ajouter()
{
	if (updateTerrain())
	{
		Generate();
	}
}

void MainWindow::BoxMeshExample()
{
	meshColor = MeshColor(Mesh());
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

void MainWindow::AddSphere() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Sphere(30).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddBoite() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Boite(Vector(50,50,50)).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddCapsule() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Capsule(Vector(30, 30, 20), Vector(10, 20, 20), 20.0).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddCone() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Cone(Vector(60, 90,30), Vector(20,20,10)).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddEllipsoid() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Ellipsoid(Vector(30, 10, 10)).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddPyramid() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Pyramid(10.0).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddTorus() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Torus(Vector2(20, 10)).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddCylinder() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Cylinder(Vector2(40, 70)).Signed(pos); },
		domain, 10));
	UpdateGeometry();
}

void MainWindow::AddStraw() {
	meshColor = MeshColor(MeshReconstruction::MarchCube(
		[=](Vector const& pos) { return Straw(Vector(15, 30, 30)).Signed(pos); },
			domain, 10));
	UpdateGeometry();
}

