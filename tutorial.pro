# QT 模块列表
QT       += core gui

# 当 QT_MAJOR_VERSION > 4 时，使用 widgets 模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# 设置二进制名称，同时也是应用窗体标题名称
# 默认使用项目名称
TARGET = "20230415"

# 创建类时，QT 会自动将对应文件添加到 SOURCES / HEADERS 中

# 源代码文件
SOURCES += \
    main.cpp \
    notification.cpp \
    widget.cpp

# 头文件
HEADERS += \
    notification.h \
    widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md
