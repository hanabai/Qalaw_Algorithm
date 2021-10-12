#ifndef MAPCONCEPT_H
#define MAPCONCEPT_H
#include <string>
#include <map>
#include <iostream>
#include <vector>
using namespace std;
#include <QMap>
#include <QString>
//typedef QMap<QString,size_t> strTMap ;
typedef multimap<string,size_t> strMap ;
class MapConcept
{
public:
    MapConcept();
    void initString(string &word);
    void CountWord();

private:
    vector<string> sWord;
};

#endif // MAPCONCEPT_H
