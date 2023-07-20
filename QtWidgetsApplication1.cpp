#include "QtWidgetsApplication1.h"
#include <QMessageBox>
// ...
void QtWidgetsApplication1::on_pushButton_clicked()
{
    // 按钮点击时，显示弹窗"Hello, World!"
    QMessageBox::information(this, "Hello", "Hello, World!");
}
// ...
QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton, &QPushButton::clicked, this, &QtWidgetsApplication1::on_pushButton_clicked);
}
//备注
QtWidgetsApplication1::~QtWidgetsApplication1()
{}

