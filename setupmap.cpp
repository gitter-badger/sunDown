#include "setupmap.h"

setupMap::setupMap()
{

}

setupMap::~setupMap()
{

}

void setupMap::setupMapArray(int length, int depth, graphicsScene* mapLoc)
{
    hex* weed = new hex;
    for(int i = 0; i<length*length*depth; i++);
    {
        mapLoc->mapArray.push_back(weed); //push the new hex object to the vector
        delete weed;
    }
}
