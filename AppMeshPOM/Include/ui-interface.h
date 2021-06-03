/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_2D_INTERFACE_H
#define UI_2D_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Assets
{
public:
    QAction *actionExit;
    QAction *actionNew_Scene;
    QAction *actionExport_obj;
    QAction *actionExport_ma;
    QAction *actionLoad_ma;
    QAction *actionGL;
    QAction *actionVectorized;
    QAction *actionExport_svg;
    QAction *actionSphere_Tracing_png;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QGroupBox *Objects_groupBox;
    QPushButton *boxReset;
    QPushButton *resetcameraButton;
    QPushButton *boxTerrain;
    QGroupBox *groupBoxPrimitives;
    QPushButton *boxSphere;
    QPushButton *boxBoite;
    QPushButton *boxCapsule;
    QPushButton *boxCone;
    QPushButton *boxPyramid;
    QPushButton *boxTorus;
    QPushButton *boxCylinder;
    QPushButton *boxStraw;
    QPushButton *boxColumn;
    QWidget *widget_GL;
    QGroupBox *Parameters_groupBox;
    QGroupBox *groupBox_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_13;
    QRadioButton *radioShadingButton_1;
    QCheckBox *wireframe;
    QGroupBox *groupBox_5;
    QPushButton *boxAjout;
    QGroupBox *groupBox_7;
    QLineEdit *lineRotationZ;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *linePositionZ;
    QLabel *label_7;
    QLineEdit *linePositionY;
    QLineEdit *linePositionX;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineRotationY;
    QLineEdit *lineRotationX;
    QComboBox *selectForm;
    QGroupBox *groupBox_8;
    QLineEdit *lineParametre_3;
    QLabel *labelParametre_3;
    QGroupBox *boxParametre;
    QLabel *labelParametre;
    QLineEdit *lineParametreA;
    QLineEdit *lineParametreB;
    QLineEdit *lineParametreC;
    QGroupBox *boxParametre_2;
    QLabel *labelParametre_2;
    QLineEdit *lineParametreA_2;
    QLineEdit *lineParametreB_2;
    QLineEdit *lineParametreC_2;
    QPushButton *boxSelect;
    QGroupBox *groupBox_6;
    QRadioButton *radioButtonIntersection;
    QRadioButton *radioButtonUnion;
    QRadioButton *radioButtonDifference;
    QCheckBox *Smooth;
    QMenuBar *menubar;
    QMenu *menuFile;

    void setupUi(QMainWindow *Assets)
    {
        if (Assets->objectName().isEmpty())
            Assets->setObjectName(QString::fromUtf8("Assets"));
        Assets->resize(881, 848);
        Assets->setMinimumSize(QSize(420, 300));
        actionExit = new QAction(Assets);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionNew_Scene = new QAction(Assets);
        actionNew_Scene->setObjectName(QString::fromUtf8("actionNew_Scene"));
        actionExport_obj = new QAction(Assets);
        actionExport_obj->setObjectName(QString::fromUtf8("actionExport_obj"));
        actionExport_ma = new QAction(Assets);
        actionExport_ma->setObjectName(QString::fromUtf8("actionExport_ma"));
        actionLoad_ma = new QAction(Assets);
        actionLoad_ma->setObjectName(QString::fromUtf8("actionLoad_ma"));
        actionGL = new QAction(Assets);
        actionGL->setObjectName(QString::fromUtf8("actionGL"));
        actionVectorized = new QAction(Assets);
        actionVectorized->setObjectName(QString::fromUtf8("actionVectorized"));
        actionExport_svg = new QAction(Assets);
        actionExport_svg->setObjectName(QString::fromUtf8("actionExport_svg"));
        actionSphere_Tracing_png = new QAction(Assets);
        actionSphere_Tracing_png->setObjectName(QString::fromUtf8("actionSphere_Tracing_png"));
        centralwidget = new QWidget(Assets);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        Objects_groupBox = new QGroupBox(centralwidget);
        Objects_groupBox->setObjectName(QString::fromUtf8("Objects_groupBox"));
        Objects_groupBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Objects_groupBox->sizePolicy().hasHeightForWidth());
        Objects_groupBox->setSizePolicy(sizePolicy);
        Objects_groupBox->setMinimumSize(QSize(350, 250));
        boxReset = new QPushButton(Objects_groupBox);
        boxReset->setObjectName(QString::fromUtf8("boxReset"));
        boxReset->setGeometry(QRect(20, 20, 81, 23));
        boxReset->setCheckable(false);
        resetcameraButton = new QPushButton(Objects_groupBox);
        resetcameraButton->setObjectName(QString::fromUtf8("resetcameraButton"));
        resetcameraButton->setGeometry(QRect(110, 20, 81, 23));
        resetcameraButton->setCheckable(true);
        resetcameraButton->setAutoDefault(false);
        resetcameraButton->setFlat(false);
        boxTerrain = new QPushButton(Objects_groupBox);
        boxTerrain->setObjectName(QString::fromUtf8("boxTerrain"));
        boxTerrain->setGeometry(QRect(20, 50, 81, 23));
        boxTerrain->setCheckable(false);
        groupBoxPrimitives = new QGroupBox(Objects_groupBox);
        groupBoxPrimitives->setObjectName(QString::fromUtf8("groupBoxPrimitives"));
        groupBoxPrimitives->setGeometry(QRect(20, 90, 281, 111));
        boxSphere = new QPushButton(groupBoxPrimitives);
        boxSphere->setObjectName(QString::fromUtf8("boxSphere"));
        boxSphere->setGeometry(QRect(10, 20, 81, 23));
        boxSphere->setCheckable(false);
        boxBoite = new QPushButton(groupBoxPrimitives);
        boxBoite->setObjectName(QString::fromUtf8("boxBoite"));
        boxBoite->setGeometry(QRect(100, 20, 81, 23));
        boxBoite->setCheckable(false);
        boxCapsule = new QPushButton(groupBoxPrimitives);
        boxCapsule->setObjectName(QString::fromUtf8("boxCapsule"));
        boxCapsule->setGeometry(QRect(190, 20, 81, 23));
        boxCapsule->setCheckable(false);
        boxCone = new QPushButton(groupBoxPrimitives);
        boxCone->setObjectName(QString::fromUtf8("boxCone"));
        boxCone->setGeometry(QRect(10, 50, 81, 23));
        boxCone->setCheckable(false);
        boxPyramid = new QPushButton(groupBoxPrimitives);
        boxPyramid->setObjectName(QString::fromUtf8("boxPyramid"));
        boxPyramid->setGeometry(QRect(190, 50, 81, 23));
        boxPyramid->setCheckable(false);
        boxTorus = new QPushButton(groupBoxPrimitives);
        boxTorus->setObjectName(QString::fromUtf8("boxTorus"));
        boxTorus->setGeometry(QRect(10, 80, 81, 23));
        boxTorus->setCheckable(false);
        boxCylinder = new QPushButton(groupBoxPrimitives);
        boxCylinder->setObjectName(QString::fromUtf8("boxCylinder"));
        boxCylinder->setGeometry(QRect(100, 80, 81, 23));
        boxCylinder->setCheckable(false);
        boxStraw = new QPushButton(groupBoxPrimitives);
        boxStraw->setObjectName(QString::fromUtf8("boxStraw"));
        boxStraw->setGeometry(QRect(100, 50, 81, 23));
        boxStraw->setCheckable(false);
        boxColumn = new QPushButton(groupBoxPrimitives);
        boxColumn->setObjectName(QString::fromUtf8("boxColumn"));
        boxColumn->setGeometry(QRect(190, 80, 81, 23));
        boxColumn->setCheckable(false);

        hboxLayout->addWidget(Objects_groupBox);

        widget_GL = new QWidget(centralwidget);
        widget_GL->setObjectName(QString::fromUtf8("widget_GL"));

        hboxLayout->addWidget(widget_GL);

        Parameters_groupBox = new QGroupBox(centralwidget);
        Parameters_groupBox->setObjectName(QString::fromUtf8("Parameters_groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Parameters_groupBox->sizePolicy().hasHeightForWidth());
        Parameters_groupBox->setSizePolicy(sizePolicy1);
        Parameters_groupBox->setMinimumSize(QSize(450, 141));
        groupBox_4 = new QGroupBox(Parameters_groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 20, 171, 121));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 61, 21));
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 50, 81, 20));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 61, 21));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 20, 81, 20));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        groupBox_13 = new QGroupBox(Parameters_groupBox);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(190, 20, 251, 121));
        radioShadingButton_1 = new QRadioButton(groupBox_13);
        radioShadingButton_1->setObjectName(QString::fromUtf8("radioShadingButton_1"));
        radioShadingButton_1->setGeometry(QRect(20, 20, 61, 20));
        radioShadingButton_1->setChecked(false);
        wireframe = new QCheckBox(groupBox_13);
        wireframe->setObjectName(QString::fromUtf8("wireframe"));
        wireframe->setGeometry(QRect(90, 20, 81, 17));
        wireframe->setChecked(true);
        groupBox_5 = new QGroupBox(Parameters_groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 170, 431, 341));
        boxAjout = new QPushButton(groupBox_5);
        boxAjout->setObjectName(QString::fromUtf8("boxAjout"));
        boxAjout->setGeometry(QRect(300, 200, 91, 31));
        boxAjout->setCheckable(false);
        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 20, 231, 111));
        lineRotationZ = new QLineEdit(groupBox_7);
        lineRotationZ->setObjectName(QString::fromUtf8("lineRotationZ"));
        lineRotationZ->setGeometry(QRect(140, 80, 81, 20));
        lineRotationZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(groupBox_7);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 80, 21, 21));
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 21, 21));
        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 21, 21));
        linePositionZ = new QLineEdit(groupBox_7);
        linePositionZ->setObjectName(QString::fromUtf8("linePositionZ"));
        linePositionZ->setGeometry(QRect(20, 80, 81, 20));
        linePositionZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 80, 21, 21));
        linePositionY = new QLineEdit(groupBox_7);
        linePositionY->setObjectName(QString::fromUtf8("linePositionY"));
        linePositionY->setGeometry(QRect(20, 50, 81, 20));
        linePositionY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        linePositionX = new QLineEdit(groupBox_7);
        linePositionX->setObjectName(QString::fromUtf8("linePositionX"));
        linePositionX->setGeometry(QRect(20, 20, 81, 20));
        linePositionX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 50, 21, 21));
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 20, 21, 21));
        lineRotationY = new QLineEdit(groupBox_7);
        lineRotationY->setObjectName(QString::fromUtf8("lineRotationY"));
        lineRotationY->setGeometry(QRect(140, 50, 81, 20));
        lineRotationY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineRotationX = new QLineEdit(groupBox_7);
        lineRotationX->setObjectName(QString::fromUtf8("lineRotationX"));
        lineRotationX->setGeometry(QRect(140, 20, 81, 20));
        lineRotationX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        selectForm = new QComboBox(groupBox_5);
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->addItem(QString());
        selectForm->setObjectName(QString::fromUtf8("selectForm"));
        selectForm->setEnabled(true);
        selectForm->setGeometry(QRect(10, 150, 101, 21));
        selectForm->setEditable(false);
        groupBox_8 = new QGroupBox(groupBox_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 180, 231, 141));
        lineParametre_3 = new QLineEdit(groupBox_8);
        lineParametre_3->setObjectName(QString::fromUtf8("lineParametre_3"));
        lineParametre_3->setEnabled(false);
        lineParametre_3->setGeometry(QRect(110, 110, 31, 21));
        lineParametre_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelParametre_3 = new QLabel(groupBox_8);
        labelParametre_3->setObjectName(QString::fromUtf8("labelParametre_3"));
        labelParametre_3->setGeometry(QRect(10, 110, 81, 21));
        boxParametre = new QGroupBox(groupBox_8);
        boxParametre->setObjectName(QString::fromUtf8("boxParametre"));
        boxParametre->setGeometry(QRect(0, 20, 231, 41));
        labelParametre = new QLabel(boxParametre);
        labelParametre->setObjectName(QString::fromUtf8("labelParametre"));
        labelParametre->setGeometry(QRect(10, 10, 81, 21));
        lineParametreA = new QLineEdit(boxParametre);
        lineParametreA->setObjectName(QString::fromUtf8("lineParametreA"));
        lineParametreA->setEnabled(false);
        lineParametreA->setGeometry(QRect(110, 10, 31, 21));
        lineParametreA->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineParametreB = new QLineEdit(boxParametre);
        lineParametreB->setObjectName(QString::fromUtf8("lineParametreB"));
        lineParametreB->setEnabled(false);
        lineParametreB->setGeometry(QRect(150, 10, 31, 21));
        lineParametreB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineParametreC = new QLineEdit(boxParametre);
        lineParametreC->setObjectName(QString::fromUtf8("lineParametreC"));
        lineParametreC->setEnabled(false);
        lineParametreC->setGeometry(QRect(190, 10, 31, 21));
        lineParametreC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        boxParametre_2 = new QGroupBox(groupBox_8);
        boxParametre_2->setObjectName(QString::fromUtf8("boxParametre_2"));
        boxParametre_2->setGeometry(QRect(0, 60, 231, 41));
        labelParametre_2 = new QLabel(boxParametre_2);
        labelParametre_2->setObjectName(QString::fromUtf8("labelParametre_2"));
        labelParametre_2->setGeometry(QRect(10, 10, 81, 21));
        lineParametreA_2 = new QLineEdit(boxParametre_2);
        lineParametreA_2->setObjectName(QString::fromUtf8("lineParametreA_2"));
        lineParametreA_2->setEnabled(false);
        lineParametreA_2->setGeometry(QRect(110, 10, 31, 21));
        lineParametreA_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineParametreB_2 = new QLineEdit(boxParametre_2);
        lineParametreB_2->setObjectName(QString::fromUtf8("lineParametreB_2"));
        lineParametreB_2->setEnabled(false);
        lineParametreB_2->setGeometry(QRect(150, 10, 31, 21));
        lineParametreB_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineParametreC_2 = new QLineEdit(boxParametre_2);
        lineParametreC_2->setObjectName(QString::fromUtf8("lineParametreC_2"));
        lineParametreC_2->setEnabled(false);
        lineParametreC_2->setGeometry(QRect(190, 10, 31, 21));
        lineParametreC_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        boxSelect = new QPushButton(groupBox_5);
        boxSelect->setObjectName(QString::fromUtf8("boxSelect"));
        boxSelect->setGeometry(QRect(120, 150, 71, 21));
        boxSelect->setCheckable(false);
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(250, 20, 171, 111));
        radioButtonIntersection = new QRadioButton(groupBox_6);
        radioButtonIntersection->setObjectName(QString::fromUtf8("radioButtonIntersection"));
        radioButtonIntersection->setGeometry(QRect(10, 50, 91, 20));
        radioButtonIntersection->setChecked(false);
        radioButtonUnion = new QRadioButton(groupBox_6);
        radioButtonUnion->setObjectName(QString::fromUtf8("radioButtonUnion"));
        radioButtonUnion->setGeometry(QRect(10, 20, 81, 20));
        radioButtonUnion->setChecked(true);
        radioButtonDifference = new QRadioButton(groupBox_6);
        radioButtonDifference->setObjectName(QString::fromUtf8("radioButtonDifference"));
        radioButtonDifference->setGeometry(QRect(10, 80, 91, 20));
        radioButtonDifference->setChecked(false);
        Smooth = new QCheckBox(groupBox_6);
        Smooth->setObjectName(QString::fromUtf8("Smooth"));
        Smooth->setGeometry(QRect(100, 20, 61, 20));
        Smooth->setChecked(false);

        hboxLayout->addWidget(Parameters_groupBox);

        Assets->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Assets);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 881, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Assets->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());

        retranslateUi(Assets);

        resetcameraButton->setDefault(false);


        QMetaObject::connectSlotsByName(Assets);
    } // setupUi

    void retranslateUi(QMainWindow *Assets)
    {
        Assets->setWindowTitle(QApplication::translate("Assets", "Implicit Terrain", nullptr));
        actionExit->setText(QApplication::translate("Assets", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("Assets", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionNew_Scene->setText(QApplication::translate("Assets", "New Scene", nullptr));
        actionExport_obj->setText(QApplication::translate("Assets", "OBJ File (.obj)", nullptr));
        actionExport_ma->setText(QApplication::translate("Assets", "Maya File (.ma)", nullptr));
        actionLoad_ma->setText(QApplication::translate("Assets", "Load", nullptr));
        actionGL->setText(QApplication::translate("Assets", "GL", nullptr));
        actionVectorized->setText(QApplication::translate("Assets", "Vectorized", nullptr));
        actionExport_svg->setText(QApplication::translate("Assets", "SVG File (.svg)", nullptr));
        actionSphere_Tracing_png->setText(QApplication::translate("Assets", "Sphere Tracing (.png)", nullptr));
        Objects_groupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        boxReset->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxReset->setText(QApplication::translate("Assets", "Reset", nullptr));
#ifndef QT_NO_TOOLTIP
        resetcameraButton->setToolTip(QApplication::translate("Assets", "<html><head/><body><p><span style=\" color:#5500ff;\">Callback #03</span></p><p><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bird</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        resetcameraButton->setText(QApplication::translate("Assets", "Reset Camera", nullptr));
#ifndef QT_NO_TOOLTIP
        boxTerrain->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxTerrain->setText(QApplication::translate("Assets", "Terrain", nullptr));
        groupBoxPrimitives->setTitle(QApplication::translate("Assets", "Primitives", nullptr));
#ifndef QT_NO_TOOLTIP
        boxSphere->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxSphere->setText(QApplication::translate("Assets", "Sphere", nullptr));
#ifndef QT_NO_TOOLTIP
        boxBoite->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxBoite->setText(QApplication::translate("Assets", "Box", nullptr));
#ifndef QT_NO_TOOLTIP
        boxCapsule->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxCapsule->setText(QApplication::translate("Assets", "Capsule", nullptr));
#ifndef QT_NO_TOOLTIP
        boxCone->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxCone->setText(QApplication::translate("Assets", "Cone", nullptr));
#ifndef QT_NO_TOOLTIP
        boxPyramid->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxPyramid->setText(QApplication::translate("Assets", "Pyramid", nullptr));
#ifndef QT_NO_TOOLTIP
        boxTorus->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxTorus->setText(QApplication::translate("Assets", "Torus", nullptr));
#ifndef QT_NO_TOOLTIP
        boxCylinder->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxCylinder->setText(QApplication::translate("Assets", "Cylinder", nullptr));
#ifndef QT_NO_TOOLTIP
        boxStraw->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxStraw->setText(QApplication::translate("Assets", "Straw", nullptr));
#ifndef QT_NO_TOOLTIP
        boxColumn->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxColumn->setText(QApplication::translate("Assets", "Column", nullptr));
        Parameters_groupBox->setTitle(QString());
        groupBox_4->setTitle(QApplication::translate("Assets", " Statistics", nullptr));
        label_2->setText(QApplication::translate("Assets", "Vertex", nullptr));
        label_3->setText(QApplication::translate("Assets", "Triangles", nullptr));
        lineEdit->setText(QString());
        groupBox_13->setTitle(QApplication::translate("Assets", "Shading", nullptr));
        radioShadingButton_1->setText(QApplication::translate("Assets", "Normal", nullptr));
        wireframe->setText(QApplication::translate("Assets", "Wireframe", nullptr));
        groupBox_5->setTitle(QApplication::translate("Assets", "Add a shape", nullptr));
#ifndef QT_NO_TOOLTIP
        boxAjout->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxAjout->setText(QApplication::translate("Assets", "Ajouter", nullptr));
        groupBox_7->setTitle(QApplication::translate("Assets", "Position and rotation", nullptr));
        lineRotationZ->setText(QString());
        label_6->setText(QApplication::translate("Assets", "Z", nullptr));
        label_4->setText(QApplication::translate("Assets", "X", nullptr));
        label_5->setText(QApplication::translate("Assets", "Y", nullptr));
        label_7->setText(QApplication::translate("Assets", "RZ", nullptr));
        linePositionX->setText(QString());
        label_8->setText(QApplication::translate("Assets", "RY", nullptr));
        label_9->setText(QApplication::translate("Assets", "RX", nullptr));
        lineRotationY->setText(QString());
        lineRotationX->setText(QString());
        selectForm->setItemText(0, QApplication::translate("Assets", "Sphere", nullptr));
        selectForm->setItemText(1, QApplication::translate("Assets", "Box", nullptr));
        selectForm->setItemText(2, QApplication::translate("Assets", "Capsule", nullptr));
        selectForm->setItemText(3, QApplication::translate("Assets", "Cone", nullptr));
        selectForm->setItemText(4, QApplication::translate("Assets", "Ellipsoid", nullptr));
        selectForm->setItemText(5, QApplication::translate("Assets", "Pyramid", nullptr));
        selectForm->setItemText(6, QApplication::translate("Assets", "Torus", nullptr));
        selectForm->setItemText(7, QApplication::translate("Assets", "Cylinder", nullptr));
        selectForm->setItemText(8, QApplication::translate("Assets", "Straw", nullptr));

        groupBox_8->setTitle(QApplication::translate("Assets", "Parametre", nullptr));
        lineParametre_3->setText(QString());
        labelParametre_3->setText(QString());
        boxParametre->setTitle(QString());
        labelParametre->setText(QString());
        lineParametreA->setText(QString());
        lineParametreB->setText(QString());
        lineParametreC->setText(QString());
        boxParametre_2->setTitle(QString());
        labelParametre_2->setText(QString());
        lineParametreA_2->setText(QString());
        lineParametreB_2->setText(QString());
        lineParametreC_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        boxSelect->setToolTip(QApplication::translate("Assets", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#5500ff;\">Callback #01</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic; color:#aa00ff;\">Create Eurographics 1996 Bear</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boxSelect->setText(QApplication::translate("Assets", "Select shape", nullptr));
        groupBox_6->setTitle(QApplication::translate("Assets", "Operator", nullptr));
        radioButtonIntersection->setText(QApplication::translate("Assets", "Intersection", nullptr));
        radioButtonUnion->setText(QApplication::translate("Assets", "Union", nullptr));
        radioButtonDifference->setText(QApplication::translate("Assets", "Difference", nullptr));
        Smooth->setText(QApplication::translate("Assets", "Smooth", nullptr));
        menuFile->setTitle(QApplication::translate("Assets", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Assets: public Ui_Assets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_2D_INTERFACE_H
