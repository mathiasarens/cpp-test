//
//  FindTheKSmallestItemInABst.cpp
//  cpptest
//
//  Created by Mathias Arens on 10/25/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <iostream>

/**
 * Definition for a binary tree node.*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        return kthSmallestElement(root, k);
    }
private:
    int kthSmallestElementCounter = 1;
    int result = -1;
    bool startCount = false;
    
    int kthSmallestElement(TreeNode* node, int k) {
        if (kthSmallestElementCounter > k) {
            return result;
        }
        if (node->left) {
            kthSmallest(node->left, k);
        } else if (!startCount) {
            startCount = true;
        }
        if (node && startCount) {
            if (kthSmallestElementCounter == k) {
                result = node->val;
            }
            kthSmallestElementCounter++;
        }
        if (node->right) {
            kthSmallest(node->right, k);
        }
        return result;
    }
};
