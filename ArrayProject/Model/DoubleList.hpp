//
//  DoubleList.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 3/3/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef DoubleList_h
#define DoubleList_h

template <classType>
class DoubleList : public DoublyLinkedList<Type>
{
private:
    
    
public:
    DoubleList();
    ~DoubleList();
    void add(Type data);
    Type remove(int index);
    void addAtIndexFast(int index, Type value);
    void addAtIndex(int index, Type value);
    Type getFromInde(int index);
    Type getFromIndexFast(int index);
};

template <class Type>
void DoubleLis<Type> :: add(Type value)
{
    BiDirectionalNode<Type> * addedNode = new BiDirectionalNode<Type>(value);
    if(this->getSize() == 0)
    {
        this->setFront(addedNode);
    }
    else
    {
        this->getEnd()->setNextPointer(addedNode);
        addeNode -> setPreviosPointer(this->getEnd());
    }
    this->setEnd(addedNode);
    this->setSize(this->getSize()+1);
}




template <class Type>
DoubleList<Type> :: ~DoubleList()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove= this->getFront();
    }
}


template <class Type>
Type DoubleLis<Type> :: remove(int index)
{
    Type derp;
    BiDirectionalNode<Type> * nodeToTakeOut = this->getFront();
    for(int spot = 0; spot < index; spot)
    {
        nodeToTakeOut = nodeToTakeOut->getNextPointer();
    }
    derp = nodeToTakeOut->getNNextPointer()
    
    BiDirectionalNode<Type> * prev = nodeToTakeOut->getPreviousPointer();
    BiDirectionalNode<Type> * next = nodeToTakeOut->getNextPointer();
    
    prev->setNextPointer(next);
    next->setPrevoiusPointer(prev);
    
    delete nodeToTakeOut;
    
    this->setSize(this->gettSize()-1);
    return derp;ß
    
    
}
#endif /* DoubleList_h */
