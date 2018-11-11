//
//  main.cpp
//  cpptest
//
//  Created by Mathias Arens on 10/25/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <iostream>
//#include "PopulatingNextRightPointersInEachNode.cpp"
//#include "RedKnightsShortestPath.cpp"
//#include "FindTheKSmallestItemInABst.cpp"
//#include "NumberOfIslands.cpp"
//#include "HighestValuePalindrome.h"

//#include "SherlockAndTest.h"
#include "FrequencyQueries.hpp"

int main(int argc, const char * argv[]) {
    
    // PopulatingNextRightPointersInEachNode.cpp
    
    //    Solution *solution = new Solution();
    //    TreeLinkNode *node1 = new TreeLinkNode(1);
    //    TreeLinkNode *node2 = new TreeLinkNode(2);
    //    TreeLinkNode *node3 = new TreeLinkNode(3);
    //    TreeLinkNode *node4 = new TreeLinkNode(4);
    //    TreeLinkNode *node5 = new TreeLinkNode(5);
    //    TreeLinkNode *node6 = new TreeLinkNode(6);
    //    TreeLinkNode *node7 = new TreeLinkNode(7);
    //    node1->left = node2;
    //    node1->right = node3;
    //    node2->left = node4;
    //    node2->right = node5;
    //    node3->left = node6;
    //    node3->right = node7;
    
    //    solution->connect(node1);
    //    std::cout << "Node1 next: " << (node1->next?std::to_string(node1->next->val):"NULL") << std::endl;
    //    std::cout << "Node2 next: " << (node2->next?std::to_string(node2->next->val):"NULL") << std::endl;
    //    std::cout << "Node3 next: " << (node3->next?std::to_string(node3->next->val):"NULL") << std::endl;
    //    std::cout << "Node4 next: " << (node4->next?std::to_string(node4->next->val):"NULL") << std::endl;
    //    std::cout << "Node5 next: " << (node5->next?std::to_string(node5->next->val):"NULL") << std::endl;
    //    std::cout << "Node6 next: " << (node6->next?std::to_string(node6->next->val):"NULL") << std::endl;
    //    std::cout << "Node7 next: " << (node7->next?std::to_string(node7->next->val):"NULL") << std::endl;
    
    //    TreeLinkNode *node1 = new TreeLinkNode(1);
    //    TreeLinkNode *node2 = new TreeLinkNode(2);
    //    TreeLinkNode *node3 = new TreeLinkNode(3);
    //    TreeLinkNode *node4 = new TreeLinkNode(4);
    //    TreeLinkNode *node5 = new TreeLinkNode(5);
    //    TreeLinkNode *node6 = new TreeLinkNode(6);
    //    TreeLinkNode *node7 = new TreeLinkNode(7);
    //    TreeLinkNode *node8 = new TreeLinkNode(8);
    //    TreeLinkNode *node9 = new TreeLinkNode(9);
    //    TreeLinkNode *node10 = new TreeLinkNode(10);
    //    TreeLinkNode *node11 = new TreeLinkNode(11);
    //    TreeLinkNode *node12 = new TreeLinkNode(12);
    //    TreeLinkNode *node13 = new TreeLinkNode(13);
    //    TreeLinkNode *node14 = new TreeLinkNode(14);
    //    TreeLinkNode *node15 = new TreeLinkNode(15);
    //
    //
    //    node1->left = node2;
    //    node1->right = node3;
    //    node2->left = node4;
    //    node2->right = node5;
    //    node3->left = node6;
    //    node3->right = node7;
    //    node4->left = node8;
    //    node4->right = node9;
    //    node5->left = node10;
    //    node5->right = node11;
    //    node6->left = node12;
    //    node6->right = node13;
    //    node7->left = node14;
    //    node7->right = node15;
    //
    //
    //
    //    solution->connect(node1);
    //    std::cout << "Node1 next: " << (node1->next?std::to_string(node1->next->val):"NULL") << std::endl;
    //    std::cout << "Node2 next: " << (node2->next?std::to_string(node2->next->val):"NULL") << std::endl;
    //    std::cout << "Node3 next: " << (node3->next?std::to_string(node3->next->val):"NULL") << std::endl;
    //    std::cout << "Node4 next: " << (node4->next?std::to_string(node4->next->val):"NULL") << std::endl;
    //    std::cout << "Node5 next: " << (node5->next?std::to_string(node5->next->val):"NULL") << std::endl;
    //    std::cout << "Node6 next: " << (node6->next?std::to_string(node6->next->val):"NULL") << std::endl;
    //    std::cout << "Node7 next: " << (node7->next?std::to_string(node7->next->val):"NULL") << std::endl;
    //    std::cout << "Node8 next: " << (node8->next?std::to_string(node8->next->val):"NULL") << std::endl;
    //    std::cout << "Node9 next: " << (node9->next?std::to_string(node9->next->val):"NULL") << std::endl;
    //    std::cout << "Node10 next: " << (node10->next?std::to_string(node10->next->val):"NULL") << std::endl;
    //    std::cout << "Node11 next: " << (node11->next?std::to_string(node11->next->val):"NULL") << std::endl;
    //    std::cout << "Node12 next: " << (node12->next?std::to_string(node12->next->val):"NULL") << std::endl;
    //    std::cout << "Node13 next: " << (node13->next?std::to_string(node13->next->val):"NULL") << std::endl;
    //    std::cout << "Node14 next: " << (node14->next?std::to_string(node14->next->val):"NULL") << std::endl;
    //    std::cout << "Node15 next: " << (node15->next?std::to_string(node15->next->val):"NULL") << std::endl;
    
    
    // RedKnightShortestPath
    //    Solution* solution = new Solution();
    //        solution->printShortestPath(7, 6, 6, 0, 1);
    //        solution->printShortestPath(6, 5, 1, 0, 5);
    //        solution->printShortestPath(7, 0, 3, 4, 3);
    //        solution->printShortestPath(1, 0, 0, 0, 0);
    //    solution->printShortestPath(70,7,15,67,3);
    //    30
    //    LR LR LR LR LR LR LR LR LR LL LL LL LL LL LL LL LL LL LL LL LL LL LL LL LL LL LL LL LL LL
    
    // FindTheKSmallestElementInABst
    
    //    TreeNode *node1 = new TreeNode(1);
    //    TreeNode *node2 = new TreeNode(2);
    //    TreeNode *node3 = new TreeNode(3);
    //    TreeNode *node4 = new TreeNode(4);
    //
    //    node3->left = node1;
    //    node3->right = node4;
    //    node1->right = node2;
    
    //    TreeNode *node1 = new TreeNode(1);
    //    TreeNode *node2 = new TreeNode(2);
    //    TreeNode *node3 = new TreeNode(3);
    //    TreeNode *node4 = new TreeNode(4);
    //    TreeNode *node5 = new TreeNode(5);
    //    TreeNode *node6 = new TreeNode(6);
    //
    //    node5->left = node3;
    //    node5->right = node6;
    //    node3->left = node2;
    //    node3->right = node4;
    //    node2->left = node1;
    //
    //    Solution* solution = new Solution();
    //    int result = solution->kthSmallest(node5, 7);
    //    std::cout << result << std::endl;
    
    
    // Number Of Islands
    
    //    vector<vector<char>> grid = vector<vector<char>>(10, vector<char>(10,'0'));
    //    grid[0][0]='1';
    //    grid[0][1]='1';
    //    grid[1][1]='1';
    //    grid[2][2]='1';
    //
    //    // [["1","1","0","0","0"],["1","1","0","0","0"],["0","0","1","0","0"],["0","0","0","1","1"]]
    //    // Expected 3
    //
    //    // [["1","0","1","1","1"],["1","0","1","0","1"],["1","1","1","0","1"]]
    //    // Expected 2
    //
    ////    grid[5][5]='1';
    ////
    ////    grid[9][9]='1';
    ////      grid[9][19]='1';
    //
    //    Solution* solution = new Solution();
    //    int result = solution->numIslands(grid);
    //    cout << result << endl;
    
    // Highest Value Palindrom
    //    std::cout << highestValuePalindrome("329",3,2) << std::endl; // 999
    //    std::cout << highestValuePalindrome("3943",4,1) << std::endl; // 3993
    //    std::cout << highestValuePalindrome("39743",5,1) << std::endl; // 39793
    //    std::cout << highestValuePalindrome("092282",6,3) << std::endl; // 992299
    //    std::cout << highestValuePalindrome("1111911",8,4) << std::endl; // 91199119
    
    //    8 4 1111911 => 91199119
    //    And a case of my own for the other part: 3 2 329 => 999
    
    // SherlockAndTest.cpp
    // cout << cost(vector<int>{1,2,3}) << endl;
    
    // Frequency Queries
    //vector<vector<int>> queries {{1,1}, {2,2}, {3,2}, {1,1}, {1,1}, {2,1}, {3,2}};
    
    vector<vector<int>> queries {{1,5}, {1,6}, {3,2}, {1,10}, {1,10}, {1,6}, {2,5}, {3,2}};
    vector<int> result = freqQuery(queries);
    for (vector<int>::iterator it = result.begin(); it != result.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

