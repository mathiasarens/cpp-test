//
//  LongestPalindromicSubsequence.cpp
//  cpptest
//
//  Created by Mathias Arens on 11/13/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include "LongestPalindromicSubsequence.hpp"
#include <vector>

int LongestPalindromicSubsequence::longestPalindromeSubseq(string s) {
    vector<vector<int>> dp(s.length(),vector<int>(s.length()));
    for (int i = 0; i < s.length(); i++) {
        dp[i][i]=1;
    }
    
    for (int substringLength=2; substringLength<s.length()+1; substringLength++) {
        for(int i = 0; i < s.length()-substringLength+1; i++) {
            int j = i + substringLength -1;
            if (s[i] == s[j] && i+1==j) {
                dp[i][j] =2;
            } else if (s[i] == s[j]) {
                dp[i][j] = dp[i+1][j-1]+2;
            } else {
                dp[i][j]= max(dp[i+1][j],dp[i][j-1]);
            }
        }
    }
    return dp[0][s.length()-1];
}
