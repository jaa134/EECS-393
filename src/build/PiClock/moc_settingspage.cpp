/****************************************************************************
** Meta object code from reading C++ file 'settingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../App/PiClock/settingsPage/settingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsPage_t {
    QByteArrayData data[14];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsPage_t qt_meta_stringdata_SettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsPage"
QT_MOC_LITERAL(1, 13, 11), // "chunkLoaded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "settingsSaved"
QT_MOC_LITERAL(4, 40, 25), // "showNewSlideDurationValue"
QT_MOC_LITERAL(5, 66, 8), // "setAlarm"
QT_MOC_LITERAL(6, 75, 8), // "addAlarm"
QT_MOC_LITERAL(7, 84, 10), // "Game::Type"
QT_MOC_LITERAL(8, 95, 16), // "Game::Difficulty"
QT_MOC_LITERAL(9, 112, 11), // "removeAlarm"
QT_MOC_LITERAL(10, 124, 14), // "AlarmListItem*"
QT_MOC_LITERAL(11, 139, 9), // "navToMain"
QT_MOC_LITERAL(12, 149, 6), // "cancel"
QT_MOC_LITERAL(13, 156, 4) // "save"

    },
    "SettingsPage\0chunkLoaded\0\0settingsSaved\0"
    "showNewSlideDurationValue\0setAlarm\0"
    "addAlarm\0Game::Type\0Game::Difficulty\0"
    "removeAlarm\0AlarmListItem*\0navToMain\0"
    "cancel\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    3,   63,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime, 0x80000000 | 7, 0x80000000 | 8,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsPage *_t = static_cast<SettingsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chunkLoaded(); break;
        case 1: _t->settingsSaved(); break;
        case 2: _t->showNewSlideDurationValue(); break;
        case 3: _t->setAlarm(); break;
        case 4: _t->addAlarm((*reinterpret_cast< QTime(*)>(_a[1])),(*reinterpret_cast< Game::Type(*)>(_a[2])),(*reinterpret_cast< Game::Difficulty(*)>(_a[3]))); break;
        case 5: _t->removeAlarm((*reinterpret_cast< AlarmListItem*(*)>(_a[1]))); break;
        case 6: _t->navToMain(); break;
        case 7: _t->cancel(); break;
        case 8: _t->save(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AlarmListItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsPage::chunkLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingsPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsPage::settingsSaved)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsPage::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SettingsPage.data,
    qt_meta_data_SettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsPage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SettingsPage::chunkLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingsPage::settingsSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
