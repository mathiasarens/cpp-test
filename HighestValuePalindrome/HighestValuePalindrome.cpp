//
//  HighestValuePalindrom.cpp
//  cpptest
//
//  Created by Mathias Arens on 10/27/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <string>
#include "HighestValuePalindrome.h"

using namespace std;

// Complete the highestValuePalindrome function below.
string highestValuePalindrome(string s, int n, int k) {
    int i = 0;
    int j = n-1;
    string result = s;
    while(i <= j) {
        if (s[i] != s[j]) {
            result[i] = result[j] = max(s[i], s[j]);
            k--;
        }
        i++;
        j--;
    }
    if (k<0) {
        return "-1";
    }
    if (k>0) {
        i = 0;
        j = n-1;
        while(i<=j) {
            if (i==j && k>0){
                result[i] = '9';
                k--;
            }
            if (result[i] != '9') {
                // change was made previously
                if ((s[i] != result[i] || s[j] != result[j]) && k>=1) {
                    result[i] = '9';
                    result[j] = '9';
                    k--;
                } else if (k>=2) {
                    result[i] = '9';
                    result[j] = '9';
                    k-=2;
                }
            }
            i++;
            j--;
        }
    }
    return result;
}



