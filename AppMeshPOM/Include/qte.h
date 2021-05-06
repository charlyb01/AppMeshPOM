#ifndef __Qte__
#define __Qte__

#include "ui-interface.h"
#include "realtime.h"
#include "meshcolor.h"
#include "node.h"
#include "mesh_reconstruction.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT
private:
	Ui::Assets uiw;				//!< Interface

	MeshWidget* meshWidget;		//!< Viewer
	MeshColor meshColor;		//!< Mesh.
	
	Node* terrain;
	MeshReconstruction::Rect3 domain;

public:
	MainWindow();
	~MainWindow();
	void CreateActions();
	void UpdateGeometry();

public slots:
	void editingSceneLeft(const Ray&);
	void editingSceneRight(const Ray&);
	void Generate();
	void Select();
	Node* makePrimitive();
	bool updateTerrain();
	void Ajouter();
	void BoxMeshExample();
	void ResetCamera();
	void UpdateMaterial();


	void AddSphere();
	void AddBoite();
	void AddCapsule();
	void AddCone();
	void AddEllipsoid();
	void AddPyramid();
	void AddTorus();
};

#endif
