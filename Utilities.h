//
//  Utilities.h
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__Utilities__
#define __statsCalculator__Utilities__




void printInstructions();
//preconditions: uses <iostream>
//postconditions: program instructions and input prompts are printed to the screen.

int GetUserinput(int min, int max);
//precondition:  range limits of min and max must be set; input must be
//               an integer; no error handling for other types.
//postcondition: an int is returned within the designated bounds.

int getNumOfDataSets();



#endif /* defined(__statsCalculator__Utilities__) */
