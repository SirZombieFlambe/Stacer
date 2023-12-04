/****************************************************************************
** Meta object code from reading C++ file 'uninstaller_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Stacer/stacer/Pages/Uninstaller/uninstaller_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uninstaller_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UninstallerPage_t {
    QByteArrayData data[9];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UninstallerPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UninstallerPage_t qt_meta_stringdata_UninstallerPage = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UninstallerPage"
QT_MOC_LITERAL(1, 16, 16), // "uninstallStarted"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "setAppCount"
QT_MOC_LITERAL(4, 46, 31), // "on_txtPackageSearch_textChanged"
QT_MOC_LITERAL(5, 78, 3), // "val"
QT_MOC_LITERAL(6, 82, 23), // "on_btnUninstall_clicked"
QT_MOC_LITERAL(7, 106, 19), // "getSelectedPackages"
QT_MOC_LITERAL(8, 126, 12) // "loadPackages"

    },
    "UninstallerPage\0uninstallStarted\0\0"
    "setAppCount\0on_txtPackageSearch_textChanged\0"
    "val\0on_btnUninstall_clicked\0"
    "getSelectedPackages\0loadPackages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UninstallerPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void,

       0        // eod
};

void UninstallerPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UninstallerPage *_t = static_cast<UninstallerPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uninstallStarted(); break;
        case 1: _t->setAppCount(); break;
        case 2: _t->on_txtPackageSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btnUninstall_clicked(); break;
        case 4: { QStringList _r = _t->getSelectedPackages();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->loadPackages(); break;
        default: ;
        }
    }
}

const QMetaObject UninstallerPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UninstallerPage.data,
      qt_meta_data_UninstallerPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UninstallerPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UninstallerPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UninstallerPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UninstallerPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
