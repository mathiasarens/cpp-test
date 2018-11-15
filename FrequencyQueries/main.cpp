//
//  main.cpp
//  FrequencyQueries
//
//  Created by Mathias Arens on 11/15/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <iostream>
#include "FrequencyQueries.h"

int main(int argc, const char * argv[]) {
    //vector<vector<int>> queries {{1,1}, {2,2}, {3,2}, {1,1}, {1,1}, {2,1}, {3,2}};
    
    vector<vector<int>> queries {{1,5}, {1,6}, {3,2}, {1,10}, {1,10}, {1,6}, {2,5}, {3,2}};
    vector<int> result = freqQuery(queries);
    for (vector<int>::iterator it = result.begin(); it != result.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
