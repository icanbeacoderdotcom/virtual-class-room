/****************************************************************************
** Meta object code from reading C++ file 'workspace.h'
**
** Created: Thu Apr 25 14:25:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "workspace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_workSpace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      33,   10,   10,   10, 0x08,
      60,   10,   10,   10, 0x08,
      89,   10,   10,   10, 0x08,
     118,   10,   10,   10, 0x08,
     147,   10,   10,   10, 0x08,
     170,   10,   10,   10, 0x08,
     201,  195,   10,   10, 0x08,
     239,   10,   10,   10, 0x08,
     261,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_workSpace[] = {
    "workSpace\0\0on_chattbox_clicked()\0"
    "on_close_chatbox_clicked()\0"
    "on_close_chatbox_3_clicked()\0"
    "on_close_chatbox_4_clicked()\0"
    "on_close_chatbox_5_clicked()\0"
    "on_saveImage_clicked()\0on_clearCanvas_clicked()\0"
    "value\0on_horizontalSlider_valueChanged(int)\0"
    "on_penColor_clicked()\0"
    "on_actionOpen_Image_triggered()\0"
};

void workSpace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        workSpace *_t = static_cast<workSpace *>(_o);
        switch (_id) {
        case 0: _t->on_chattbox_clicked(); break;
        case 1: _t->on_close_chatbox_clicked(); break;
        case 2: _t->on_close_chatbox_3_clicked(); break;
        case 3: _t->on_close_chatbox_4_clicked(); break;
        case 4: _t->on_close_chatbox_5_clicked(); break;
        case 5: _t->on_saveImage_clicked(); break;
        case 6: _t->on_clearCanvas_clicked(); break;
        case 7: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_penColor_clicked(); break;
        case 9: _t->on_actionOpen_Image_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData workSpace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject workSpace::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_workSpace,
      qt_meta_data_workSpace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &workSpace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *workSpace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *workSpace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_workSpace))
        return static_cast<void*>(const_cast< workSpace*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int workSpace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
