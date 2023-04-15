
#include "widget.h"

#include <QLabel>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->child = new QLabel("我来了");
    this->child->setParent(this);
    this->child->setVisible(false);

    // 创建一个按钮，指定其文本与所属的上级控件
    // 当设置上级控件时，按钮随上级控件一起显示
    QPushButton *button = new QPushButton("打开", this);
    button->move(100, 100);
    this->setFixedSize(800, 600);

    if (this->visiable) {
        button->setText("关闭");
        this->child->setVisible(true);
    }

    // 如下创建一个未设置上级控件的按钮，此时只有调用 .show() 函数
    // 才会显示该按钮，且按钮为悬浮状态
    //    QPushButton *flyingButtion = new QPushButton;
    //    flyingButtion->show();

    // 如下代码修改 button 的文字
    // 添加 onclick 事件(signal / slot)
    // 当状态为 打开时，显示 child widget，并显示文字为 关闭
    // 否则，隐藏 child widget，并显示文字打开

    connect(button, &QPushButton::clicked, this, [=]() {
        if (this->visiable) {
            button->setText("打开");
            this->visiable = false;
            this->child->setVisible(false);
        } else {
            button->setText("关闭");
            this->visiable = true;
            this->child->setVisible(true);
        }
    });
}

Widget::~Widget() {}
