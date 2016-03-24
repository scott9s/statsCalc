//
//  data.cpp
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//
#include <iostream>
#include "datum.h"
#include "stdDeviation.h" 
#include "centralTendency.h"
using namespace std; 

datum::datum()
{
    mean = median = mode = 0;
    variance = stdDev = 0;
    sizeOfRawData = 0;
    rawData = nullptr;
}

datum::~datum()
{
    if (rawData != nullptr)
    {
        delete[] rawData;
        rawData = nullptr;
    }
}

void datum::calculations()
{
    //CALCULATE MEASURES OF CENTRAL TENDENCY FOR DATA SET
    mean   = calcMean(rawData, sizeOfRawData);
    median = calcMedian(rawData, sizeOfRawData);
    mode   = calcMode(rawData, sizeOfRawData);
    
    //CALCULATE VARIANCE & STANDARD DEVIATION FOR DATA SET
    variance = calcVariance(rawData, sizeOfRawData);
    stdDev   = calcSTDev(variance);
}



void datum::initializeRawData()
{
    promptSizeOfRawData();
    readInData();
}


void datum::promptSizeOfRawData()
{
    cout << endl << "How many data points would you like to enter?" << endl
                 << "Your amount: ";
    cin >> sizeOfRawData; //no error checking--for now
}


void datum::readInData()
{
    rawData = new double[sizeOfRawData]; //make array to match size needed
    
    for (int i = 0; i < sizeOfRawData; i++)
    {
        cout << endl << "Enter data point #" << (i + 1) << ": ";
        cin >> rawData[i];
    }
    cout << endl << "Thank you. All data for this set has been read in." << endl;
}


ostream& operator << (ostream& out, const datum& dataSet)
{
    out << "Measures of Central Tendency:" << '\n'
        << "mean:   " << dataSet.mean << '\n'
        << "median: " << dataSet.median << '\n'
        << "mean:   " << dataSet.median << endl;
    
    out << "variance: " << dataSet.variance << '\n'
        << "standard deviation: " << dataSet.stdDev << endl; 
    return out;
}



