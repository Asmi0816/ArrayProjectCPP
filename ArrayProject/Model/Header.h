//
//  Header.h
//  ArrayProject
//
//  Created by Smith, Arick on 4/11/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include "Node.hpp"

template <class Type>
class BinarySearchTreeNode : public Node<Type>
{
    
private:
    
    BinarySearchTreeNode<Type> * root;
    BinarySearchTreeNode<Type> * leftChild;
    BinarySearchTreeNode<Type> * rightChild;
    
public:
    
    BinarySearchTreeNode();
    BinarySearchTreeNode(Type data);

    BinarySearchTreeNode<Type> * getRootPointer();
    BinarySearchTreeNode<Type> * getLeftChild();
    BinarySearchTreeNode<Type> * getRightChild();

    void setRootPointer(BinarySearchTreeNode<type> * root);
    void setLeftChild(BinarySearchTreeNode<type> * left);
    void setRightChild(BinarySearchTreeNode<type> * right);
};


template <class Type>
BinarySearchTreeNode<Type> :: BinarySearchTreeNode() : Node<Type>()
{
    this->root = nullptr;
    this->frontChild = nullptr;
    this->leftChild = nullptr;
    
}

template <class Type>
BinarySearchTreeNode<Type> :: BinarySearchTreeNode(Type data) : Node<Type>(data)
{
    this->root = nullptr;
    this->frontChild = nullptr;
    this->leftChild = nullptr;
    
}



#endif /* Header_h */
