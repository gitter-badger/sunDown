#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include <QObject>
#include <QGraphicsScene>
#include <hex.h>
#include <feature.h>
#include <time.h>


class graphicsScene : public QGraphicsScene
{
    Q_OBJECT
public:
    std::vector<hex*> mapArray;

    explicit graphicsScene(QGraphicsScene *parent = 0);
    ~graphicsScene();
};

#endif // GRAPHICSSCENE_H
