//
//  main.cpp
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#include "datum.h"
#include "groupedData.h"
#include "stdDeviation.h"
#include "Utilities.h"

int main()
{
    int numOfDataSets;
    datum *dataSets;
    
    //PRINT WELCOME AND INTSTRUCTIONS
    printInstructions();
    
    //GET NUMBER OF DATA SETS TO USE AND DECLARE ARRAY
    numOfDataSets = getNumOfDataSets();
    dataSets = new datum[numOfDataSets];
    
    //FOR EACH DATA SET
    for(int i = 0; i < numOfDataSets; i++)
    {
        dataSets[i].initializeRawData();
        dataSets[i].calculations();
        
        cout << "Displaying calculations for data set number " << i+1 << ':' << '\n' << endl;
        cout << dataSets[i];
    }
    
    delete [] dataSets; //last bit of cleanup
    
    return 0;
}












