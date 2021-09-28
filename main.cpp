#include <QCoreApplication>
#include "Chapter2_GreedyAlgorithm/optimalloading.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

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
    //    cout<<"push success!"<<endl;

    return a.exec();
}
