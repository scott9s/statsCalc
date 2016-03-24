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




void printInstructions()
{
    cout << "| * * * * * * * * * | Welcome to the statistics calculator! |  * * * * * * * * * |"
         << endl << endl
         << "Bringing you standard deviation for single data points and grouped data since 2016"
         << endl << endl << endl
         << "You will first be prompted to choose between single or grouped data." << endl
         << "You will then be asked how many data sets you wish you use." << endl
         << "Next you will choose how many points of data you wish to enter for a given set." << endl
         << "After entering your data, the program will perform statistical calculations and" <<endl
         << "store them for output or comparison with other data sets." << endl << endl
         << "Let's begin!" << endl << endl;
}

int getNumOfDataSets()
{
    int arraySize;
    cout << endl << "How many data sets would you like to work with?" << endl
                 << "Enter number of data sets: ";
    cin >> arraySize; //no error checking--for now
    return arraySize;
}


int GetUserinput(int min, int max)
{
    int userValue;
    do
    {
        cout << "Your choice: ";
        try
        {
            cin >> userValue;
            if (userValue < min || userValue > max)  //throw error if input is out of bounds
                throw userValue;
        }
        catch(int userValue)
        {
            cerr << "Invalid selection. Please try again" << endl << endl;
        }
    } while(userValue < min || userValue > max);
    
    return userValue;
}

