#include "mapconcept.h"
//#include <QTextStream>
MapConcept::MapConcept()
{

}

void MapConcept::initString(string &word)
{
    sWord.push_back (word);
}

void MapConcept::CountWord()
{
    strMap wordCount;
    int i=0;
    for(vector<string>::iterator it=sWord.begin ();it!=sWord.end ();++it)
    {
        cout<<"vector:"<<*it<<endl;
        wordCount.insert (std::make_pair(*it,++i));
//        wordCount[*it]=++i;
//        cout<<"wordCount:"<<wordCount[*it]<<"\t"<<i<<endl;
    }
//    for(const auto &w:wordCount)
//    {
//        cout<<w.first<<"\toccurs:"<<w.second<<"time"<<endl;
//    }
    for(map<string,size_t>::iterator it=wordCount.begin ();it!=wordCount.end ();++it)
    {
        cout<<it->first<<"\toccurs:"<<it->second<<"time"<<endl;
    }

}
