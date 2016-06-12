#ifndef HEX_H
#define HEX_H

#include <QWidget>
#include <feature.h>
#include <item.h>

class hex : public QWidget
{
    Q_OBJECT
public:
    bool searchable;
    std::vector<feature> tileFeatures;
    std::vector<item> tileItems;
    int maintenance;
    int move;
    bool moveable;
    std::string name;
    //??? image

    explicit hex(QWidget *parent = 0);
    ~hex();
signals:

public slots:
};

#endif // HEX_H
