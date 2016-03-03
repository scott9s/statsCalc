//
//  Utilities.h
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__Utilities__
#define __statsCalculator__Utilities__


double mean(const double data[], int size);
//preconditions: takes an initalized array of doubles; size should be the number of
                //elements contained in the array, NOT the size of the array. 
//postconditions: returns the sum of data[] divided by the number of elements.

void printInstructions();
//preconditions: uses <iostream>
//postconditions: program instructions and input prompts are printed to the screen.


#endif /* defined(__statsCalculator__Utilities__) */
