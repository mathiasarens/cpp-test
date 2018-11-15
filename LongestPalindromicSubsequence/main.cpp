//
//  main.cpp
//  LongestPalindromicSubsequence
//
//  Created by Mathias Arens on 11/15/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <iostream>
#include "LongestPalindromicSubsequence.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    LongestPalindromicSubsequence* longestPalindromicSubsequenceObj = new LongestPalindromicSubsequence();
    cout << longestPalindromicSubsequenceObj->longestPalindromeSubseq("bbbab") << endl;
    return 0;
}
