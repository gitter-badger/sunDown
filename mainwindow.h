#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QGraphicsScene>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>
#include <hex.h>
#include <graphicsscene.h>
#include <setupmap.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    graphicsScene *setupMapScene();
    ~MainWindow();

private slots:
    void on_homeButton_clicked();

    void on_mapbutton_clicked();

    void on_medicalButton_clicked();

    void on_craftingButton_clicked();

    void on_itemsButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
