/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 20), // "on_Login_btn_clicked"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 21), // "on_SignUp_btn_clicked"
QT_MOC_LITERAL(55, 21), // "on_SignIn_btn_clicked"
QT_MOC_LITERAL(77, 22), // "on_proceed_btn_clicked"
QT_MOC_LITERAL(100, 17), // "on_verify_clicked"
QT_MOC_LITERAL(118, 23), // "on_cancel_verif_clicked"
QT_MOC_LITERAL(142, 10), // "setCamera1"
QT_MOC_LITERAL(153, 13), // "QCameraDevice"
QT_MOC_LITERAL(167, 12), // "cameraDevice"
QT_MOC_LITERAL(180, 10), // "setCamera2"
QT_MOC_LITERAL(191, 18), // "on_Capture_clicked"
QT_MOC_LITERAL(210, 15), // "on_face_clicked"
QT_MOC_LITERAL(226, 15), // "on_back_clicked"
QT_MOC_LITERAL(242, 21), // "on_Image_next_clicked"
QT_MOC_LITERAL(264, 16), // "on_retry_clicked"
QT_MOC_LITERAL(281, 19), // "on_back_cam_clicked"
QT_MOC_LITERAL(301, 27), // "on_go_to_face_recog_clicked"
QT_MOC_LITERAL(329, 24) // "on_face_rec_back_clicked"

    },
    "MainWindow\0on_Login_btn_clicked\0\0"
    "on_SignUp_btn_clicked\0on_SignIn_btn_clicked\0"
    "on_proceed_btn_clicked\0on_verify_clicked\0"
    "on_cancel_verif_clicked\0setCamera1\0"
    "QCameraDevice\0cameraDevice\0setCamera2\0"
    "on_Capture_clicked\0on_face_clicked\0"
    "on_back_clicked\0on_Image_next_clicked\0"
    "on_retry_clicked\0on_back_cam_clicked\0"
    "on_go_to_face_recog_clicked\0"
    "on_face_rec_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    1,  116,    2, 0x08,    7 /* Private */,
      11,    1,  119,    2, 0x08,    9 /* Private */,
      12,    0,  122,    2, 0x08,   11 /* Private */,
      13,    0,  123,    2, 0x08,   12 /* Private */,
      14,    0,  124,    2, 0x08,   13 /* Private */,
      15,    0,  125,    2, 0x08,   14 /* Private */,
      16,    0,  126,    2, 0x08,   15 /* Private */,
      17,    0,  127,    2, 0x08,   16 /* Private */,
      18,    0,  128,    2, 0x08,   17 /* Private */,
      19,    0,  129,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
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
        (void)_t;
        switch (_id) {
        case 0: _t->on_Login_btn_clicked(); break;
        case 1: _t->on_SignUp_btn_clicked(); break;
        case 2: _t->on_SignIn_btn_clicked(); break;
        case 3: _t->on_proceed_btn_clicked(); break;
        case 4: _t->on_verify_clicked(); break;
        case 5: _t->on_cancel_verif_clicked(); break;
        case 6: _t->setCamera1((*reinterpret_cast< std::add_pointer_t<QCameraDevice>>(_a[1]))); break;
        case 7: _t->setCamera2((*reinterpret_cast< std::add_pointer_t<QCameraDevice>>(_a[1]))); break;
        case 8: _t->on_Capture_clicked(); break;
        case 9: _t->on_face_clicked(); break;
        case 10: _t->on_back_clicked(); break;
        case 11: _t->on_Image_next_clicked(); break;
        case 12: _t->on_retry_clicked(); break;
        case 13: _t->on_back_cam_clicked(); break;
        case 14: _t->on_go_to_face_recog_clicked(); break;
        case 15: _t->on_face_rec_back_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCameraDevice &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QCameraDevice &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE