
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>



class Widget : public QWidget

{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QWidget *child = nullptr;
    bool visiable = false;
};

#endif // WIDGET_H
