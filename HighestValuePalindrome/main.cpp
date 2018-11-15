//
//  main.cpp
//  HighestValuePalindrome
//
//  Created by Mathias Arens on 11/15/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <iostream>
#include "HighestValuePalindrome.h"

int main(int argc, const char * argv[]) {
    
    // Highest Value Palindrom
    std::cout << highestValuePalindrome("329",3,2) << std::endl; // 999
    std::cout << highestValuePalindrome("3943",4,1) << std::endl; // 3993
    std::cout << highestValuePalindrome("39743",5,1) << std::endl; // 39793
    std::cout << highestValuePalindrome("092282",6,3) << std::endl; // 992299
    std::cout << highestValuePalindrome("1111911",8,4) << std::endl; // 91199119
    
    //    8 4 1111911 => 91199119
    //    And a case of my own for the other part: 3 2 329 => 999
    
    return 0;
}
