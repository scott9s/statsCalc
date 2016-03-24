//
//  centralTendency.h
//  statsCalculator
//
//  Created by Scott Steele on 3/24/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__centralTendency__
#define __statsCalculator__centralTendency__

#include <stdio.h>

double calcMean(const double data[], const int& size);
//preconditions: takes an initalized array of doubles; size should be the number of
//              elements contained in the array, NOT the size of the array.
//postconditions: returns midpoint if odd size or average of middle two points if even size.


double calcMedian(const double data[], const int& size);
//preconditions: takes an initalized array of doubles; size should be the number of
//              elements contained in the array, NOT the size of the array.
//              Array MUST be sorted.
//postconditions: returns midpoint if odd size or average of middle two points if even size.


double calcMode(const double data[], const int& size);
//preconditions: takes an initalized array of doubles; size should be the number of
//              elements contained in the array, NOT the size of the array.
//              Array MUST be sorted.
//postconditions: returns mode of data set. Only finds unimode--for now.



#endif /* defined(__statsCalculator__centralTendency__) */
