/****************************************************************************
** Meta object code from reading C++ file 'settings_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Stacer/stacer/Pages/Settings/settings_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsPage_t {
    QByteArrayData data[16];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsPage_t qt_meta_stringdata_SettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsPage"
QT_MOC_LITERAL(1, 13, 4), // "init"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 16), // "cmbThemesChanged"
QT_MOC_LITERAL(4, 36, 5), // "index"
QT_MOC_LITERAL(5, 42, 19), // "cmbLanguagesChanged"
QT_MOC_LITERAL(6, 62, 14), // "cmbDiskChanged"
QT_MOC_LITERAL(7, 77, 25), // "on_checkAutostart_clicked"
QT_MOC_LITERAL(8, 103, 7), // "checked"
QT_MOC_LITERAL(9, 111, 20), // "on_btnDonate_clicked"
QT_MOC_LITERAL(10, 132, 19), // "cmbStartPageChanged"
QT_MOC_LITERAL(11, 152, 4), // "text"
QT_MOC_LITERAL(12, 157, 30), // "on_spinCpuPercent_valueChanged"
QT_MOC_LITERAL(13, 188, 5), // "value"
QT_MOC_LITERAL(14, 194, 33), // "on_spinMemoryPercent_valueCha..."
QT_MOC_LITERAL(15, 228, 31) // "on_spinDiskPercent_valueChanged"

    },
    "SettingsPage\0init\0\0cmbThemesChanged\0"
    "index\0cmbLanguagesChanged\0cmbDiskChanged\0"
    "on_checkAutostart_clicked\0checked\0"
    "on_btnDonate_clicked\0cmbStartPageChanged\0"
    "text\0on_spinCpuPercent_valueChanged\0"
    "value\0on_spinMemoryPercent_valueChanged\0"
    "on_spinDiskPercent_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      15,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void SettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsPage *_t = static_cast<SettingsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cmbThemesChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->cmbLanguagesChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->cmbDiskChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->on_checkAutostart_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_btnDonate_clicked(); break;
        case 6: _t->cmbStartPageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_spinCpuPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_spinMemoryPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_spinDiskPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SettingsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsPage.data,
      qt_meta_data_SettingsPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
