//
//  SherlockAndTest.cpp
//  cpptest
//
//  Created by Mathias Arens on 11/10/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <stdio.h>

#include "SherlockAndTest.h"

// Complete the cost function below.
int cost(vector<int> B) {
    int dp[B.size()][2];
    for (int i = 0; i < B.size(); i++)
        for (int j = 0; j < 2; j++)
            dp[i][j] = 0;
    
    for (int i = 0; i < B.size()-1; i++) {
        // state dp[i][0]: took 1 on B[i] before
        dp[i+1][0] = max(dp[i][0], dp[i][1]+abs(B[i]-1));
        // state dp[i][1]: took B[i] on B[i] before
        dp[i+1][1] = max(dp[i][0]+abs(1-B[i+1]),dp[i][1]+abs(B[i]-B[i+1]));
    }
    
    return max(dp[B.size()-1][0], dp[B.size()-1][1]);
}
