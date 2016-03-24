//
//  centralTendency.cpp
//  statsCalculator
//
//  Created by Scott Steele on 3/24/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#include "centralTendency.h"

double calcMean(const double data[], const int& size)
{
    double sumData = 0.0;
    for (int i = 0; i < size; i++)
    {
        sumData += data[i];
    }
    return sumData/size ;
}

double calcMedian(const double data[], const int& size)
{
    if (size == 1)
        return data[0];
    
    if ((size % 2) == 0) //if number is even
    {
        double midOne = data[size/2 -1];
        double midTwo = data[size/2];
        return ((midOne + midTwo) / 2);
    }
    else
        return data[(size/2)];
}

//finds unimode--for now
double calcMode(const double data[], const int& size)
{
    if (size == 1)
        return data[0];
    
    double mode = data[0];                              //set mode to first element
    int modeCount = 1;
    int currentCount = 1;
    for (int i = 0; i < size; i++)                      //i is incremented in both loops
    {
        while ((data[i] == data[i+1]) && (i < size))    //while consecutive elements are the same
        {
            currentCount++;                             //increment current count
            i++;                                        //increment i
        }
        if (currentCount > modeCount)                   //if current count is greater than the previous modal count
        {
            mode = data[i - 1];                         //reassign
            modeCount = currentCount;
            currentCount = 1;                           //reset current count to prepare for next iteration
        }
    }
    return mode;
}



