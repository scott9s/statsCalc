//
//  stdDeviation.cpp
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//
#include <cmath>
#include "data.h"
#include "stdDeviation.h"

void datumSTDev(datum& data, const double rawData[], const int size)
{
    //calculates standard deviation
   
    double sumXsqrd = 0;
    double sumX = 0;
    
    //sum of sqrt(X)
    for (int i = 0; i < size; i++)
    {
        sumXsqrd += pow(rawData[i], 2);
    }
    
    //sum of X
    for (int i = 0; i < size; i++)
    {
        sumX += rawData[i];
    }
    
    //set member variables 
    data.setVariance(     ((size * sumXsqrd) - pow(sumX, 2)) / (size * (size - 1))  );
    data.setstdDev( sqrt( ((size * sumXsqrd) - pow(sumX, 2)) / (size * (size - 1)) ));
}


void groupedSTDev(datum& data, const double classMids[], const double classFreq[], const int size)
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

    data.setVariance(    ((sumFreq * sumXsqrd_xFreq) - pow(sumX_xFreq, 2)) / (sumFreq * (sumFreq-1))   );
    data.setstdDev( sqrt(((sumFreq * sumXsqrd_xFreq) - pow(sumX_xFreq, 2)) / (sumFreq * (sumFreq-1)))  );
}




