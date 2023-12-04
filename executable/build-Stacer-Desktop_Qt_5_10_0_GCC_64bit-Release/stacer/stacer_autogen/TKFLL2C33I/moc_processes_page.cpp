/****************************************************************************
** Meta object code from reading C++ file 'processes_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Stacer/stacer/Pages/Processes/processes_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processes_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessesPage_t {
    QByteArrayData data[24];
    char stringdata0[378];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessesPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessesPage_t qt_meta_stringdata_ProcessesPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProcessesPage"
QT_MOC_LITERAL(1, 14, 4), // "init"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 13), // "loadProcesses"
QT_MOC_LITERAL(4, 34, 14), // "loadHeaderMenu"
QT_MOC_LITERAL(5, 49, 9), // "createRow"
QT_MOC_LITERAL(6, 59, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(7, 81, 7), // "Process"
QT_MOC_LITERAL(8, 89, 4), // "proc"
QT_MOC_LITERAL(9, 94, 31), // "on_txtProcessSearch_textChanged"
QT_MOC_LITERAL(10, 126, 3), // "val"
QT_MOC_LITERAL(11, 130, 29), // "on_sliderRefresh_valueChanged"
QT_MOC_LITERAL(12, 160, 1), // "i"
QT_MOC_LITERAL(13, 162, 26), // "on_btnLimitProcess_clicked"
QT_MOC_LITERAL(14, 189, 25), // "on_btnRemoveLimit_clicked"
QT_MOC_LITERAL(15, 215, 24), // "on_btnEndProcess_clicked"
QT_MOC_LITERAL(16, 240, 28), // "on_btnSetCPUPriority_clicked"
QT_MOC_LITERAL(17, 269, 42), // "on_tableProcess_customContext..."
QT_MOC_LITERAL(18, 312, 3), // "pos"
QT_MOC_LITERAL(19, 316, 22), // "determineNicenessColor"
QT_MOC_LITERAL(20, 339, 8), // "niceness"
QT_MOC_LITERAL(21, 348, 19), // "updateNicenessColor"
QT_MOC_LITERAL(22, 368, 5), // "pid_t"
QT_MOC_LITERAL(23, 374, 3) // "pid"

    },
    "ProcessesPage\0init\0\0loadProcesses\0"
    "loadHeaderMenu\0createRow\0QList<QStandardItem*>\0"
    "Process\0proc\0on_txtProcessSearch_textChanged\0"
    "val\0on_sliderRefresh_valueChanged\0i\0"
    "on_btnLimitProcess_clicked\0"
    "on_btnRemoveLimit_clicked\0"
    "on_btnEndProcess_clicked\0"
    "on_btnSetCPUPriority_clicked\0"
    "on_tableProcess_customContextMenuRequested\0"
    "pos\0determineNicenessColor\0niceness\0"
    "updateNicenessColor\0pid_t\0pid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessesPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       9,    1,   85,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,
      16,    0,   94,    2, 0x08 /* Private */,
      17,    1,   95,    2, 0x08 /* Private */,
      19,    1,   98,    2, 0x08 /* Private */,
      21,    2,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 6, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   18,
    QMetaType::QColor, QMetaType::Int,   20,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int,   23,   20,

       0        // eod
};

void ProcessesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessesPage *_t = static_cast<ProcessesPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->loadProcesses(); break;
        case 2: _t->loadHeaderMenu(); break;
        case 3: { QList<QStandardItem*> _r = _t->createRow((*reinterpret_cast< const Process(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->on_txtProcessSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_sliderRefresh_valueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->on_btnLimitProcess_clicked(); break;
        case 7: _t->on_btnRemoveLimit_clicked(); break;
        case 8: _t->on_btnEndProcess_clicked(); break;
        case 9: _t->on_btnSetCPUPriority_clicked(); break;
        case 10: _t->on_tableProcess_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: { QColor _r = _t->determineNicenessColor((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->updateNicenessColor((*reinterpret_cast< pid_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ProcessesPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ProcessesPage.data,
      qt_meta_data_ProcessesPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProcessesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessesPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProcessesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
