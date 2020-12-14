#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    img= new res(this);
    img->setGeometry(100,100,600,600);
    img->setFrameShape(QFrame::Box);
    img->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

