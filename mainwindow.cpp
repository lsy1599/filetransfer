#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_exit_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("关闭程序");
    msgBox.setText("注意,程序即将关闭.");
    msgBox.exec();
    this->close();
}
