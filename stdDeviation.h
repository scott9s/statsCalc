//
//  stdDeviation.h
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__stdDeviation__
#define __statsCalculator__stdDeviation__

#include "datum.h"
#include "groupedData.h"

double calcVariance(const double rawData[], const int sizeRaw);
//used for single data points
//preconditions: data[] must be initialized and size must contain the number of the elements
//               initialized.
//postconditions: returns a double representing the variance for the data set.

double calcSTDev(double variance);
//preconditions: variance must first be calculated because it is passed in as a parameter
//postconditions: returns the sqrt of the variance, which is the standard deviation.

void groupedSTDev(groupedData grpData[], const double classMids[], const double classFreq[],
                  const int iterator,  const int size);
//used for grouped data
//preconditions: data[] must be initialized and size must contain the number of the elements
//               initialized. Class midpoints and frequencies must be calculated before calling.
//postconditions: grouped variance and standard deviation are set and stored in datum class.


#endif /* defined(__statsCalculator__stdDeviation__) */
