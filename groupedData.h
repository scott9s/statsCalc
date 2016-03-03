//
//  groupedData.h
//  statsCalculator
//
//  Created by Scott Steele on 3/1/16.
//  Copyright (c) 2016 Scott Steele. All rights reserved.
//

#ifndef __statsCalculator__groupedData__
#define __statsCalculator__groupedData__

#include "datum.h"

class groupedData : public datum
{
public:
    groupedData() : datum() {classMidpoint = 0; classFrequency = 0;}
private:
    double classMidpoint;
    int    classFrequency;
};

#endif /* defined(__statsCalculator__groupedData__) */
