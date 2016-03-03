//
//  stdDeviation.h
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__stdDeviation__
#define __statsCalculator__stdDeviation__

#include "data.h"

void datumSTDev(datum& data, const double rawData[], const int size);
//used for single data points
//preconditions: data[] must be initialized and size must contain the number of the elements
//               initialized.
//postconditions: variance and standard deviation are set.



#endif /* defined(__statsCalculator__stdDeviation__) */
