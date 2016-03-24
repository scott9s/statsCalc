//
//  data.h
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__data__
#define __statsCalculator__data__

#include <iostream>
using namespace std;

class datum
{
public:
    datum();
    ~datum(); 
    
    void setMean(double num)     {mean = num;}
    void setVariance(double num) {variance = num;}
    void setstdDev(double num)   {stdDev = num;}
    
    double getMean()     {return mean;}
    double getVariance() {return variance;}
    double getstdDev()   {return stdDev;}
    
    void calculations();
    friend void STDev(const double rawData[], const int sizeRaw);
    
    void initializeRawData();
    void promptSizeOfRawData();
    void readInData();
    
    friend ostream& operator << (ostream& out, const datum& dataSet);
    
private:
    double mean, median, mode;
    double variance;
    double stdDev;
    
    double *rawData;
    int sizeOfRawData;
};



#endif /* defined(__statsCalculator__data__) */
