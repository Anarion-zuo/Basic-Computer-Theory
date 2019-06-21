//
// Created by anarion on 6/21/19.
//

#ifndef ALGORITHMPRACTISES_BINARYSEARCHTREE_H
#define ALGORITHMPRACTISES_BINARYSEARCHTREE_H


#include "BinaryTree.h"

class BinarySearchTree : public BinaryTree {
public:
    BinarySearchTree(TreeNode* root = nullptr);

    void push(long val);
};


#endif //ALGORITHMPRACTISES_BINARYSEARCHTREE_H
