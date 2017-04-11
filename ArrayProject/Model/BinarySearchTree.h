//
//  BinarySearchTree.h
//  ArrayProject
//
//  Created by Smith, Arick on 4/11/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h
#include "Tree.h"
#include "BinarySearchTreeNode.h"

template <class Type>
class BinarySearchTree : public Tree<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
};


template <class Type>
BinarySearchTree<Type> :: BinarySearchTree() : Tree<Type>()
{
    this->root = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTree<Type> : getRoot()
{
    this->root = nullptr;
}

template <class Type>
void BinarySearchTree<Type> :: setRoot(BinarySearchTreeNode<Type> * root)
{
    
    this->root = root;
}



#endif /* BinarySearchTree_h */
