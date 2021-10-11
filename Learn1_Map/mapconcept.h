#ifndef MAPCONCEPT_H
#define MAPCONCEPT_H
#include <string>
#include <map>
#include <iostream>
using namespace std;
#include <QMap>
#include <QString>
//typedef QMap<QString,size_t> strTMap ;
typedef map<string,size_t> strMap ;
class MapConcept
{
public:
    MapConcept();

    void CountWord();
};

#endif // MAPCONCEPT_H
