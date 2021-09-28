#ifndef OPTIMALLOADING_H
#define OPTIMALLOADING_H

#include <QMap>
#include <QVector>
//#include <vector>
#include <QtAlgorithms>
#include <iostream>
using namespace std;
typedef QVector<int> vecInt ;
typedef QMap<int,int> mapIntVec ;

class OptimalLoading
{
public:
    OptimalLoading();
    OptimalLoading(int lodCapacity, int antiqQuantity, vecInt antiqWeight);
    private:
        void initAntiqIndexAWeight(int antiques,vecInt antiqWeight);//根据已知的古董数量对其序号和重量进行映射；

    public:
        double maxOptimalLoadingCount();//最终最优解；

    private:
        mapIntVec qAntiqueIndexAndWeight;//古董<序号，重量>antique serial number,antique weight
        int iAntiques;//古董数量
        vecInt iAntiqueWeight;//古董重量；
        int iLoadCapacity;//装载量
        double iMaxCanLoad;//最大装载量
};

#endif // OPTIMALLOADING_H
