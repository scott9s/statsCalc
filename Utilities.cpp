//
//  Utilities.cpp
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//
#include <iostream> 
#include "Utilities.h"
using namespace std;

double mean(const double data[], int size)
{
    double sumData = 0.0;
    for (int i = 0; i < size; i++)
    {
        sumData += data[i];
    }
    return sumData/size ;
}

void printInstructions()
{
    cout << "Welcome to the stats calculator" << endl << endl;
    //...will write more later 
}