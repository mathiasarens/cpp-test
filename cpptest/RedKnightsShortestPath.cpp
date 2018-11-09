//
//  RedKnightsShortestPath.cpp
//  cpptest
//
//  Created by Mathias Arens on 10/25/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//
#include <iostream>
#include <list>
#include <utility>
#include <limits>

// Complete the printShortestPath function below.
class Solution {
public:
    void printShortestPath(int n, int i_start, int j_start, int i_end, int j_end) {
        // Print the distance along with the sequence of moves
        bool** visited = new bool*[n];
        for (int i = 0; i<n; i++)
            visited[i] = new bool[n];
        for (int i = 0; i < n; i++) {   // for each row
            for (int j = 0; j < n; j++) { // for each column
                visited[i][j] = false;
            }
        }
        int** costs = new int*[n];
        for (int i = 0; i<n; i++)
            costs[i] = new int[n];
        for (int i = 0; i < n; i++) {   // for each row
            for (int j = 0; j < n; j++) { // for each column
                costs[i][j] = 0;
            }
        }
        std::list<std::string>** shortestPathListArray = new std::list<std::string>*[n];
        for (int i = 0; i<n; i++)
            shortestPathListArray[i] = new std::list<std::string>[n];
        
        std::list<std::pair<int, int>> *queue = new std::list<std::pair<int,int>>();
        queue->push_back(std::pair<int, int>(i_start,j_start));
        while(!queue->empty()) {
            // get node
            std::pair<int, int> node = queue->front();
            queue->pop_front();
            
            if (!visited[node.first][node.second]) {
                visited[node.first][node.second] = true;
                
                // add next nodes...
                int row;
                int column;
                
                
                // ... upper left
                row = node.first-2;
                column = node.second-1;
                if (row >= 0 && column >= 0) {
                    queue->push_back(std::pair<int, int>(row, column));
                }
                
                // ... upper right
                row = node.first-2;
                column = node.second+1;
                if (row>=0 && column<n) {
                    queue->push_back(std::pair<int, int>(row, column));
                }
                
                // ... right
                row = node.first;
                column = node.second+2;
                if (column < n) {
                    queue->push_back(std::pair<int, int>(row, column));
                }
                
                // ... lower right
                row = node.first+2;
                column = node.second+1;
                if (row < n && column < n) {
                    queue->push_back(std::pair<int, int>(row, column));
                }
                
                // ... lower left
                row = node.first+2;
                column = node.second-1;
                if (row < n && column >= 0) {
                    queue->push_back(std::pair<int, int>(row, column));
                }
                
                // ... left
                row = node.first;
                column = node.second-2;
                if (column>=0) {
                    queue->push_back(std::pair<int, int>(row, column));
                }
                
                
                
                
                
                
                
                
                
                int shortestDistance = std::numeric_limits<int>::max();
                std::string shortestDirectionFromSource;
                std::pair<int,int> shortestSourceNode;
                // calculcate shortest distances from possible locations ...
                
                // .. right
                row = node.first;
                column = node.second+2;
                if (column<n && visited[row][column]==true) {
                    if (costs[row][column]+1 < shortestDistance) {
                        shortestDistance = costs[row][column]+1;
                        shortestDirectionFromSource = "L";
                        shortestSourceNode= std::pair<int,int>(row,column);
                    }
                }
                
                // .. upper right
                row = node.first-2;
                column = node.second+1;
                if (row>=0 && column<n && visited[row][column]==true) {
                    if (costs[row][column]+1 < shortestDistance) {
                        shortestDistance = costs[row][column]+1;
                        shortestDirectionFromSource = "LL";
                        shortestSourceNode = std::pair<int,int>(row,column);
                    }
                }
                
                
                // .. upper left
                row = node.first-2;
                column = node.second-1;
                if (row>=0 && column>=0 && visited[row][column]==true) {
                    if (costs[row][column]+1 < shortestDistance) {
                        shortestDistance = costs[row][column]+1;
                        shortestDirectionFromSource = "LR";
                        shortestSourceNode= std::pair<int,int>(row,column);
                    }
                }
                
                
                // .. left
                row = node.first;
                column = node.second-2;
                if (column>=0 && visited[row][column]==true) {
                    if (costs[row][column]+1 < shortestDistance) {
                        shortestDistance = costs[row][column]+1;
                        shortestDirectionFromSource = "R";
                        shortestSourceNode= std::pair<int,int>(row,column);
                    }
                }
                
                
                // .. lower left
                row = node.first+2;
                column = node.second-1;
                if (row<n && column>=0 && visited[row][column]==true) {
                    if (costs[row][column]+1 < shortestDistance) {
                        shortestDistance = costs[row][column]+1;
                        shortestDirectionFromSource = "UR";
                        shortestSourceNode= std::pair<int,int>(row,column);
                    }
                }
                
                // ... lower right
                row = node.first+2;
                column = node.second+1;
                if (row<n && column<n && visited[row][column]==true) {
                    if (costs[row][column]+1 < shortestDistance) {
                        shortestDistance = costs[row][column]+1;
                        shortestDirectionFromSource = "UL";
                        shortestSourceNode= std::pair<int,int>(row,column);
                    }
                }
                
                
                
                row = node.first;
                column = node.second;
                if (!(row == i_start and column == j_start)) {
                    costs[row][column] = shortestDistance;
                    std::list<std::string> list = shortestPathListArray[shortestSourceNode.first][shortestSourceNode.second];
                    shortestPathListArray[row][column].insert(shortestPathListArray[row][column].end(), list.begin(), list.end());
                    shortestPathListArray[row][column].push_back(shortestDirectionFromSource);
                }
                
                if (row == i_end && column == j_end && visited[row][column] == true) {
                    break;
                }
            }
        }
        if (visited[i_end][j_end]) {
            std::cout << costs[i_end][j_end] << std::endl;
            for (std::list<std::string>::iterator it = shortestPathListArray[i_end][j_end].begin(); it != shortestPathListArray[i_end][j_end].end(); it++){
                std::cout << *it << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Impossible" << std::endl;
        }
    }
};


