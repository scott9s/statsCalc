//
//  stdDeviation.cpp
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//
#include <cmath>
#include "datum.h"
#include "groupedData.h" 
#include "stdDeviation.h"
using namespace std; 


double calcVariance(const double rawData[], const int sizeRaw)
{
    //calculates standard deviation
   
    double sumXsqrd = 0;
    double sumX = 0;
    
    //sum of sqrt(X)
    for (int i = 0; i < sizeRaw; i++)
    {
        sumXsqrd += pow(rawData[i], 2);
    }
    
    //sum of X
    for (int i = 0; i < sizeRaw; i++)
    {
        sumX += rawData[i];
    }
    
    //return variance
    return ( (sizeRaw * sumXsqrd) - pow(sumX, 2)) / (sizeRaw * (sizeRaw - 1) );
}

double calcSTDev(double variance)
{
    return sqrt(variance);
}


void groupedSTDev(groupedData grpData[], const double classMids[], const double classFreq[],
                  const int iterator, const int size)
{
    //calculates standard deviation
    int    sumFreq = 0;
    double sumX_xFreq = 0;
    double sumXsqrd_xFreq = 0;
    
    
    //sum of class frequencies
    for (int i = 0; i < size; i++)
    {
        sumFreq += classFreq[i];
    }
    
    //sum of sqrt(Xm) * f
    for (int i = 0; i < size; i++)
    {
        sumXsqrd_xFreq += pow(classMids[i], 2) * classFreq[i];
    }
    
    //sum of Xm * f
    for (int i = 0; i < size; i++)
    {
        sumX_xFreq += classMids[i] * classFreq[i];
    }
    
    //result of each calculation passed as a parameter in setter function call
    grpData[iterator].setVariance(    ((sumFreq * sumXsqrd_xFreq) - pow(sumX_xFreq, 2)) / (sumFreq * (sumFreq-1))   );
    grpData[iterator].setstdDev(sqrt( ((sumFreq * sumXsqrd_xFreq) - pow(sumX_xFreq, 2)) / (sumFreq * (sumFreq-1)) ) );
}

