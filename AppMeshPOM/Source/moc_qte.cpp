/****************************************************************************
** Meta object code from reading C++ file 'qte.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Include/qte.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qte.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "editingSceneLeft"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "Ray"
QT_MOC_LITERAL(4, 33, 17), // "editingSceneRight"
QT_MOC_LITERAL(5, 51, 8), // "Generate"
QT_MOC_LITERAL(6, 60, 6), // "Select"
QT_MOC_LITERAL(7, 67, 13), // "makePrimitive"
QT_MOC_LITERAL(8, 81, 5), // "Node*"
QT_MOC_LITERAL(9, 87, 13), // "updateTerrain"
QT_MOC_LITERAL(10, 101, 7), // "Ajouter"
QT_MOC_LITERAL(11, 109, 14), // "BoxMeshExample"
QT_MOC_LITERAL(12, 124, 11), // "ResetCamera"
QT_MOC_LITERAL(13, 136, 14), // "UpdateMaterial"
QT_MOC_LITERAL(14, 151, 9), // "AddSphere"
QT_MOC_LITERAL(15, 161, 8), // "AddBoite"
QT_MOC_LITERAL(16, 170, 10), // "AddCapsule"
QT_MOC_LITERAL(17, 181, 7), // "AddCone"
QT_MOC_LITERAL(18, 189, 12), // "AddEllipsoid"
QT_MOC_LITERAL(19, 202, 10), // "AddPyramid"
QT_MOC_LITERAL(20, 213, 8), // "AddTorus"
QT_MOC_LITERAL(21, 222, 11), // "AddCylinder"
QT_MOC_LITERAL(22, 234, 8) // "AddStraw"

    },
    "MainWindow\0editingSceneLeft\0\0Ray\0"
    "editingSceneRight\0Generate\0Select\0"
    "makePrimitive\0Node*\0updateTerrain\0"
    "Ajouter\0BoxMeshExample\0ResetCamera\0"
    "UpdateMaterial\0AddSphere\0AddBoite\0"
    "AddCapsule\0AddCone\0AddEllipsoid\0"
    "AddPyramid\0AddTorus\0AddCylinder\0"
    "AddStraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x0a /* Public */,
       4,    1,  112,    2, 0x0a /* Public */,
       5,    0,  115,    2, 0x0a /* Public */,
       6,    0,  116,    2, 0x0a /* Public */,
       7,    0,  117,    2, 0x0a /* Public */,
       9,    0,  118,    2, 0x0a /* Public */,
      10,    0,  119,    2, 0x0a /* Public */,
      11,    0,  120,    2, 0x0a /* Public */,
      12,    0,  121,    2, 0x0a /* Public */,
      13,    0,  122,    2, 0x0a /* Public */,
      14,    0,  123,    2, 0x0a /* Public */,
      15,    0,  124,    2, 0x0a /* Public */,
      16,    0,  125,    2, 0x0a /* Public */,
      17,    0,  126,    2, 0x0a /* Public */,
      18,    0,  127,    2, 0x0a /* Public */,
      19,    0,  128,    2, 0x0a /* Public */,
      20,    0,  129,    2, 0x0a /* Public */,
      21,    0,  130,    2, 0x0a /* Public */,
      22,    0,  131,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 8,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editingSceneLeft((*reinterpret_cast< const Ray(*)>(_a[1]))); break;
        case 1: _t->editingSceneRight((*reinterpret_cast< const Ray(*)>(_a[1]))); break;
        case 2: _t->Generate(); break;
        case 3: _t->Select(); break;
        case 4: { Node* _r = _t->makePrimitive();
            if (_a[0]) *reinterpret_cast< Node**>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->updateTerrain();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->Ajouter(); break;
        case 7: _t->BoxMeshExample(); break;
        case 8: _t->ResetCamera(); break;
        case 9: _t->UpdateMaterial(); break;
        case 10: _t->AddSphere(); break;
        case 11: _t->AddBoite(); break;
        case 12: _t->AddCapsule(); break;
        case 13: _t->AddCone(); break;
        case 14: _t->AddEllipsoid(); break;
        case 15: _t->AddPyramid(); break;
        case 16: _t->AddTorus(); break;
        case 17: _t->AddCylinder(); break;
        case 18: _t->AddStraw(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
