//
//  data.h
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__data__
#define __statsCalculator__data__

#include <stdio.h>

class datum
{
public:
    datum() {mean = 0; variance = 0; stdDev = 0;}
    
    void setMean(double num)     {mean = num;}
    void setVariance(double num) {variance = num;}
    void setstdDev(double num)   {stdDev = num;}
    
    double getMean()           {return mean;}
    double getVariance()       {return variance;}
    double getstdDev()         {return stdDev;}
    //double getDataValue(int i) {return dataValues[i];}
    
protected:
    double mean;
    double variance;
    double stdDev;
    //double dataValues[];
};

#endif /* defined(__statsCalculator__data__) */
