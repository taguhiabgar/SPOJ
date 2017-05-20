//
//  Page1.cpp
//  SPOJ
//
//  Created by Taguhi Abgaryan on 5/20/17.
//  Copyright © 2017 Taguhi Abgaryan. All rights reserved.
//

#include <iostream>
#include "Page1.hpp"
#include "HelperFunctions.hpp"

using namespace std;

void problemSbstr1() {
    // http://www.spoj.com/problems/SBSTR1/
}

void problemPrime1() {
    // http://www.spoj.com/problems/PRIME1/
    
    int testsCount;
    cin >> testsCount;
    
    for (int test = 0; test < testsCount; test++) {
        int start, end;
        cin >> start >> end;
        for (int i = start; i <= end; i++) {
            if (isPrime(i)) {
                cout << i << endl;
            }
        }
        cout << endl;
    }
}

void problemTest() {
    // http://www.spoj.com/problems/TEST/
    
    while (true) {
        int num;
        cin >> num;
        if (num == 42) {
            break;
        }
        cout << num << endl;
    }
}
