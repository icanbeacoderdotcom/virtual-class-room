/****************************************************************************
** Meta object code from reading C++ file 'ChatterBoxServer.h'
**
** Created: Thu Apr 25 14:19:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ChatterBoxServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatterBoxServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatterBoxServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      30,   17,   17,   17, 0x08,
      45,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChatterBoxServer[] = {
    "ChatterBoxServer\0\0readyRead()\0"
    "disconnected()\0sendUserList()\0"
};

void ChatterBoxServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChatterBoxServer *_t = static_cast<ChatterBoxServer *>(_o);
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->sendUserList(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChatterBoxServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChatterBoxServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_ChatterBoxServer,
      qt_meta_data_ChatterBoxServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatterBoxServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatterBoxServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatterBoxServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatterBoxServer))
        return static_cast<void*>(const_cast< ChatterBoxServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int ChatterBoxServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
