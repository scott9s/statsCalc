//
//  data.cpp
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#include "datum.h"


void calculations(datum dataSets[], const int numOfDataSets)
{
    int sizeOfRawData;
    double *rawData;
    
    //FOR EACH DATA SET
    for(int i = 0; i < numOfDataSets; i++)
    {
        //INITIALIZE DYNAMIC ARRAY TO HOLD RAW DATA
        sizeOfRawData = getSizeOfRawData();  //get number of values to read in
        rawData = new double[sizeOfRawData]; //make array to match size needed
        readInData(rawData, sizeOfRawData);  //read in values from keyboard
        
        //CALCULATE STANDARD DEVIATION FOR DATA SET
        STDev(dataSets, rawData, i, sizeOfRawData);
        
        delete [] rawData; //delete to prep for next iteration
        
    }  //exit loop with all data sets calculated
}