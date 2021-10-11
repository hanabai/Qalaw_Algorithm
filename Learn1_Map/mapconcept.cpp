#include "mapconcept.h"
//#include <QTextStream>
MapConcept::MapConcept()
{

}

void MapConcept::CountWord()
{
    strMap wordCount;
//    QTextStream  cin(stdin,QIODevice::ReadOnly);
//    QString word;
    string word;
    for(size_t i=0;i<5;++i)
    {
        word.insert (i,"kan");
        ++wordCount[word];
    }
    for(const auto &w:wordCount)
    {
        cout<<w.first<<"occurs:"<<w.second<<"time"<<endl;
    }

}
