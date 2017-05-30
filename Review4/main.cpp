//
//  main.cpp
//  Review4
//
//  Created by Mauricio Matsubara on 30/05/17.
//  Copyright © 2017 Mauricio Matsubara. All rights reserved.
//

/*
 
 1. Create an integer variable and multiply it by 2
 
 1. Multiply it by 2 until it the final result is higher than 100000
 
 
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    int b;
    b = 1;
    while (b < 100000) {
        b = b * 2;
    }
    std::cout << b << "\n";
    return 0;
}
