//
//  NumberOfIslands.cpp
//  cpptest
//
//  Created by Mathias Arens on 10/26/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int result = 0;
        if (grid.size()>0 && grid[0].size()>0) {
            vector<vector<bool>> visited = vector<vector<bool>>(grid.size(), vector<bool>(grid[0].size(), false));
            for (int row = 0; row < grid.size(); row++) {
                for(int column = 0; column < grid[0].size(); column++) {
                    result += floodFill(grid, visited, row, column);
                }
            }
        }
        return result;
    }
private:
    
    
    int floodFill(vector<vector<char>>& grid,vector<vector<bool>>& visited, int row, int column) {
        int result = 0;
        if (!visited[row][column]) {
            visited[row][column] = true;
            result = grid[row][column] == '1';
            
            // search for land only
            if (result > 0) {
                // top
                if (row-1>=0) {
                    floodFill(grid, visited, row-1, column);
                }
                
                // right
                if (column+1<grid[0].size()) {
                    floodFill(grid, visited, row, column+1);
                }
                
                // bottom
                if (row+1<grid.size()) {
                    floodFill(grid, visited, row+1, column);
                }
                
                // left
                if (column-1>=0) {
                    floodFill(grid, visited, row, column-1);
                }
            }
        }
        return result;
    }
};
