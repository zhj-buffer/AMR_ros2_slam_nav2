/****************************************************************************
** Meta object code from reading C++ file 'goal_pose_updater.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/nav2_rviz_plugins/goal_pose_updater.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'goal_pose_updater.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nav2_rviz_plugins__GoalPoseUpdater_t {
    QByteArrayData data[7];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nav2_rviz_plugins__GoalPoseUpdater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nav2_rviz_plugins__GoalPoseUpdater_t qt_meta_stringdata_nav2_rviz_plugins__GoalPoseUpdater = {
    {
QT_MOC_LITERAL(0, 0, 34), // "nav2_rviz_plugins::GoalPoseUp..."
QT_MOC_LITERAL(1, 35, 10), // "updateGoal"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 1), // "x"
QT_MOC_LITERAL(4, 49, 1), // "y"
QT_MOC_LITERAL(5, 51, 5), // "theta"
QT_MOC_LITERAL(6, 57, 5) // "frame"

    },
    "nav2_rviz_plugins::GoalPoseUpdater\0"
    "updateGoal\0\0x\0y\0theta\0frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nav2_rviz_plugins__GoalPoseUpdater[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::QString,    3,    4,    5,    6,

       0        // eod
};

void nav2_rviz_plugins::GoalPoseUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GoalPoseUpdater *_t = static_cast<GoalPoseUpdater *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGoal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GoalPoseUpdater::*_t)(double , double , double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GoalPoseUpdater::updateGoal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject nav2_rviz_plugins::GoalPoseUpdater::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_nav2_rviz_plugins__GoalPoseUpdater.data,
      qt_meta_data_nav2_rviz_plugins__GoalPoseUpdater,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *nav2_rviz_plugins::GoalPoseUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nav2_rviz_plugins::GoalPoseUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nav2_rviz_plugins__GoalPoseUpdater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int nav2_rviz_plugins::GoalPoseUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void nav2_rviz_plugins::GoalPoseUpdater::updateGoal(double _t1, double _t2, double _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
