#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),

ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

graphicsScene* MainWindow::setupMapScene()
{
    graphicsScene * map = new graphicsScene;
    QGraphicsView * view = new QGraphicsView;
    view->setScene(map);
    ui->mapViewLayout->addWidget(view);
    view->show();
    return map;
}

void MainWindow::on_homeButton_clicked()
{
    ui->mainStackedWidget->setCurrentIndex(1);
    ui->menuStackedWidget->setCurrentIndex(0);
}

void MainWindow::on_medicalButton_clicked()
{
    ui->gameStackedWidget->setCurrentIndex(0);
}

void MainWindow::on_mapbutton_clicked()
{
    ui->gameStackedWidget->setCurrentIndex(1);
}

void MainWindow::on_craftingButton_clicked()
{
    ui->gameStackedWidget->setCurrentIndex(2);
}

void MainWindow::on_itemsButton_clicked()
{
    ui->gameStackedWidget->setCurrentIndex(3);
}
