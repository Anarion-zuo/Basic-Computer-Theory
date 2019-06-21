//
// Created by anarion on 6/21/19.
//

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree(TreeNode *root) : BinaryTree(root) {}

void BinarySearchTree::push(long val) {
    if (!_root){
        _root = new TreeNode(nullptr, nullptr, val);
        return;
    }
    TreeNode *last = nullptr, *node = _root;
    bool lr = false;
    while(node){
        last = node;
        if (val < node->get_val()){
            node = node->get_left();
            lr = false;
        } else{
            node = node->get_right();
            lr = true;
        }
    }
    if (lr){
        last->set_right(new TreeNode(nullptr, nullptr, val));
    }else{
        last->set_left(new TreeNode(nullptr, nullptr, val));
    }
}
