//
//  HelperFunctions.cpp
//  SPOJ
//
//  Created by Taguhi Abgaryan on 5/20/17.
//  Copyright © 2017 Taguhi Abgaryan. All rights reserved.
//

#include "HelperFunctions.hpp"
#include <math.h>

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }
    if (number % 2 == 0) {
        return number == 2;
    }
    for (int i = 3; i <= sqrt(number); i += 2) {        
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
