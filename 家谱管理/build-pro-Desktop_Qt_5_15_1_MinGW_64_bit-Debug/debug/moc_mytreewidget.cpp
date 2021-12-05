/****************************************************************************
** Meta object code from reading C++ file 'mytreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mytreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyTreeWidget_t {
    QByteArrayData data[15];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTreeWidget_t qt_meta_stringdata_MyTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MyTreeWidget"
QT_MOC_LITERAL(1, 13, 14), // "signal_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "MyTreeWidgetItem*"
QT_MOC_LITERAL(4, 47, 21), // "signal_inforSavedItem"
QT_MOC_LITERAL(5, 69, 40), // "on_treeWidget_customContextMe..."
QT_MOC_LITERAL(6, 110, 3), // "pos"
QT_MOC_LITERAL(7, 114, 11), // "addRootNode"
QT_MOC_LITERAL(8, 126, 14), // "deleteAllNodes"
QT_MOC_LITERAL(9, 141, 11), // "addCategory"
QT_MOC_LITERAL(10, 153, 11), // "changeInfor"
QT_MOC_LITERAL(11, 165, 10), // "deleteNode"
QT_MOC_LITERAL(12, 176, 10), // "reNameNode"
QT_MOC_LITERAL(13, 187, 7), // "clicked"
QT_MOC_LITERAL(14, 195, 16) // "QTreeWidgetItem*"

    },
    "MyTreeWidget\0signal_clicked\0\0"
    "MyTreeWidgetItem*\0signal_inforSavedItem\0"
    "on_treeWidget_customContextMenuRequested\0"
    "pos\0addRootNode\0deleteAllNodes\0"
    "addCategory\0changeInfor\0deleteNode\0"
    "reNameNode\0clicked\0QTreeWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   70,    2, 0x08 /* Private */,
       7,    0,   73,    2, 0x08 /* Private */,
       8,    0,   74,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    0,   76,    2, 0x08 /* Private */,
      11,    0,   77,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    2,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,    2,    2,

       0        // eod
};

void MyTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_clicked((*reinterpret_cast< MyTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->signal_inforSavedItem((*reinterpret_cast< MyTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_treeWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->addRootNode(); break;
        case 4: _t->deleteAllNodes(); break;
        case 5: _t->addCategory(); break;
        case 6: _t->changeInfor(); break;
        case 7: _t->deleteNode(); break;
        case 8: _t->reNameNode(); break;
        case 9: _t->clicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyTreeWidgetItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyTreeWidgetItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyTreeWidget::*)(MyTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTreeWidget::signal_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyTreeWidget::*)(MyTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyTreeWidget::signal_inforSavedItem)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_MyTreeWidget.data,
    qt_meta_data_MyTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int MyTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MyTreeWidget::signal_clicked(MyTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyTreeWidget::signal_inforSavedItem(MyTreeWidgetItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
