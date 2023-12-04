/****************************************************************************
** Meta object code from reading C++ file 'system_cleaner_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Stacer/stacer/Pages/SystemCleaner/system_cleaner_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system_cleaner_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemCleanerPage_t {
    QByteArrayData data[24];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemCleanerPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemCleanerPage_t qt_meta_stringdata_SystemCleanerPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SystemCleanerPage"
QT_MOC_LITERAL(1, 18, 11), // "addTreeRoot"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "CleanCategories"
QT_MOC_LITERAL(4, 47, 3), // "cat"
QT_MOC_LITERAL(5, 51, 5), // "title"
QT_MOC_LITERAL(6, 57, 13), // "QFileInfoList"
QT_MOC_LITERAL(7, 71, 5), // "infos"
QT_MOC_LITERAL(8, 77, 7), // "noChild"
QT_MOC_LITERAL(9, 85, 12), // "addTreeChild"
QT_MOC_LITERAL(10, 98, 4), // "text"
QT_MOC_LITERAL(11, 103, 4), // "size"
QT_MOC_LITERAL(12, 108, 4), // "data"
QT_MOC_LITERAL(13, 113, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(14, 130, 6), // "parent"
QT_MOC_LITERAL(15, 137, 35), // "on_treeWidgetScanResult_itemC..."
QT_MOC_LITERAL(16, 173, 4), // "item"
QT_MOC_LITERAL(17, 178, 6), // "column"
QT_MOC_LITERAL(18, 185, 19), // "on_btnClean_clicked"
QT_MOC_LITERAL(19, 205, 18), // "on_btnScan_clicked"
QT_MOC_LITERAL(20, 224, 30), // "on_btnBackToCategories_clicked"
QT_MOC_LITERAL(21, 255, 10), // "systemScan"
QT_MOC_LITERAL(22, 266, 11), // "systemClean"
QT_MOC_LITERAL(23, 278, 10) // "cleanValid"

    },
    "SystemCleanerPage\0addTreeRoot\0\0"
    "CleanCategories\0cat\0title\0QFileInfoList\0"
    "infos\0noChild\0addTreeChild\0text\0size\0"
    "data\0QTreeWidgetItem*\0parent\0"
    "on_treeWidgetScanResult_itemClicked\0"
    "item\0column\0on_btnClean_clicked\0"
    "on_btnScan_clicked\0on_btnBackToCategories_clicked\0"
    "systemScan\0systemClean\0cleanValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemCleanerPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   69,    2, 0x08 /* Private */,
       1,    3,   78,    2, 0x28 /* Private | MethodCloned */,
       9,    3,   85,    2, 0x08 /* Private */,
       9,    4,   92,    2, 0x08 /* Private */,
      15,    2,  101,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,
      20,    0,  108,    2, 0x08 /* Private */,
      21,    0,  109,    2, 0x08 /* Private */,
      22,    0,  110,    2, 0x08 /* Private */,
      23,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6, QMetaType::Bool,    4,    5,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::ULongLong,    4,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong, 0x80000000 | 13,   12,   10,   11,   14,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void SystemCleanerPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemCleanerPage *_t = static_cast<SystemCleanerPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addTreeRoot((*reinterpret_cast< const CleanCategories(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QFileInfoList(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->addTreeRoot((*reinterpret_cast< const CleanCategories(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QFileInfoList(*)>(_a[3]))); break;
        case 2: _t->addTreeChild((*reinterpret_cast< const CleanCategories(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const quint64(*)>(_a[3]))); break;
        case 3: _t->addTreeChild((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const quint64(*)>(_a[3])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[4]))); break;
        case 4: _t->on_treeWidgetScanResult_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 5: _t->on_btnClean_clicked(); break;
        case 6: _t->on_btnScan_clicked(); break;
        case 7: _t->on_btnBackToCategories_clicked(); break;
        case 8: _t->systemScan(); break;
        case 9: _t->systemClean(); break;
        case 10: { bool _r = _t->cleanValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject SystemCleanerPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SystemCleanerPage.data,
      qt_meta_data_SystemCleanerPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SystemCleanerPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemCleanerPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemCleanerPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SystemCleanerPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
