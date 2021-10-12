#include <QCoreApplication>
#include "Chapter2_GreedyAlgorithm/optimalloading.h"
#include "Lineary_LinkedList/linkedlist.h"
#include "Learn1_Map/mapconcept.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
#ifdef GREEDYALGORITHM
    int sLoadCapacity=10;
    int sAntiqQuantity=8;
    vecInt sAntiqWit;
    sAntiqWit.push_back (4);
    sAntiqWit.push_back (10);
    sAntiqWit.push_back (7);
    sAntiqWit.push_back (11);
    sAntiqWit.push_back (3);
    sAntiqWit.push_back (5);
    sAntiqWit.push_back (14);
    sAntiqWit.push_back (2);
    OptimalLoading* oOptimalLoading=new OptimalLoading(sLoadCapacity,sAntiqQuantity,sAntiqWit);
    double macTakeAway=oOptimalLoading->maxOptimalLoadingCount ();
    cout<<"The ship can take away:"<<macTakeAway<<endl;
    delete oOptimalLoading;
#endif
    //    cout<<"push success!"<<endl;
#ifdef LINKEDLIST
    LinkedList* lList=new LinkedList();
    lList->ShowListNode (lList->CreateList ());
#endif

#ifdef EASYMAP
    MapConcept mMap;
    string word,word1,word2,word3;
    word="he";
    mMap.initString (word);
    word1="hse";
    mMap.initString (word1);
    word2="hsse";
    mMap.initString (word2);
    word3="he";
    mMap.initString (word3);
    mMap.CountWord ();
//    mMap->CountWord ();
#endif

    return a.exec();
}
