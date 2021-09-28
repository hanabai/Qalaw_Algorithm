#include "optimalloading.h"

OptimalLoading::OptimalLoading()
{

}

OptimalLoading::OptimalLoading(int lodCapacity, int antiqQuantity, vecInt antiqWeight)
{
    iLoadCapacity=lodCapacity;
    iAntiques=antiqQuantity;
    std::sort(antiqWeight.begin (),antiqWeight.end ());
    iMaxCanLoad=0;
    for(auto &a:antiqWeight)
    {
        iAntiqueWeight.push_back (a);
    }
    initAntiqIndexAWeight(iAntiques,iAntiqueWeight);
    cout<<iMaxCanLoad<<endl;
}

void OptimalLoading::initAntiqIndexAWeight(int antiques, vecInt antiqWeight)
{
    for(int i=0;i<antiques;++i)
    {
        qAntiqueIndexAndWeight.insert (i,antiqWeight.at (i));
    }
}

double OptimalLoading::maxOptimalLoadingCount()
{
    int weight=0;
    foreach(auto wit,qAntiqueIndexAndWeight)
    {
        weight=weight+wit;
        if(weight<=iLoadCapacity)
            iMaxCanLoad++;
        else
            break;

        cout<<"iMaxLoad:"<<iMaxCanLoad<<endl;
    }

    return iMaxCanLoad;
}
