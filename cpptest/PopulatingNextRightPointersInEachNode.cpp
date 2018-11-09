//
//  PopulatingNextRightPointersInEachNode.cpp
//  cpptest
//
//  Created by Mathias Arens on 10/25/18.
//  Copyright © 2018 Mathias Arens. All rights reserved.
//

#include <stdio.h>
#include <list>

struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root)
            inorderTraversal(root, NULL);
    }
private:
    void inorderTraversal(TreeLinkNode *node, TreeLinkNode *lastLeftChild) {
        if (node->left) {
            if (lastLeftChild) {
                lastLeftChild->next = node;
                if (lastLeftChild->right) {
                    lastLeftChild = lastLeftChild->right;
                }
            }
            inorderTraversal(node->left, lastLeftChild);
        } else if (lastLeftChild) {
            lastLeftChild->next = node;
        }
        
        if (node->left && node->right) {
            node->left->next = node->right;
        }
        
        if (node->right) {
            inorderTraversal(node->right, node->left);
        }
    }
};
