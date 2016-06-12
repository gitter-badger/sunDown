#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //setup mainWindow
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("sunDown");
    w.setWindowIcon(QIcon(":icon.ico"));
    w.show();

    //create mapScene
    graphicsScene* mapScene = w.setupMapScene();

    //setup mapArray
    setupMap* sM = new setupMap;
    sM->setupMapArray(100, 10, mapScene);

    return a.exec();
}
