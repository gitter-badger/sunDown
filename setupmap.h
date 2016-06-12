#ifndef SETUPMAP_H
#define SETUPMAP_H
#include <graphicsscene.h>

class setupMap
{
public:
    setupMap();
    ~setupMap();
    void setupMapArray(int length, int depth, graphicsScene* mapLoc);
};

#endif // SETUPMAP_H
