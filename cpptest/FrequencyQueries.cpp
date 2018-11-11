//
//  FrequencyQueries.cpp
//  cpptest
//
//  Created by Mathias Arens on 11/10/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include "FrequencyQueries.hpp"
#include <map>

// Complete the freqQuery function below.
vector<int> freqQuery(vector<vector<int>> queries) {
    map<int,int> numberToFrequency;
    map<int, int> frequencyCountMap;
    vector<int> result;
    for (int i = 0; i < queries.size(); i++) {
        int number = queries[i][1];
        switch (queries[i][0]) {
            case 1:
                if (numberToFrequency.find(number) == numberToFrequency.end()) {
                    numberToFrequency.insert(pair<int,int>(number, 1));
                    frequencyCountMap[1]++;
                } else {
                    if (frequencyCountMap[numberToFrequency[number]]) {
                        frequencyCountMap[numberToFrequency[number]]--;
                    }
                    numberToFrequency[number]++;
                    frequencyCountMap[numberToFrequency[number]]++;
                }
                break;
            case 2:
                if (numberToFrequency[number] > 0) {
                    if (frequencyCountMap[numberToFrequency[number]]>0) {
                        frequencyCountMap[numberToFrequency[number]]--;
                    }
                    numberToFrequency[number]--;
                    frequencyCountMap[numberToFrequency[number]]++;
                }
                break;
            case 3:
                result.push_back(frequencyCountMap[number]>0?1:0);
                break;
            default:
                // Unknown command
                break;
        }
    }
    return result;
}
