//
//  DoublyLinkedList.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 3/1/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include "BiDirectionalNode.hpp"
template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
    
public:
    DoublyLinkedList();
    virtual ~DoublyLinkedLIst() = 0;
    
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
    
    virtual void add(Type data) = 0;
    virtual Type remove(int index) = 0;
    
    
};
template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    size = 0;
    front =nullptr;
    end = nullptr;
}

template <class Type>
DoublyLinkedList<Type> :: ~DoublyLinkedList()
{
   
}

template <class Type>
int DoublyLinkedList<Type> :: getSize()
{
    return this->size;
}

template <class Type>
DoublyLinkedList<Type> * DoublyLinkedList<Type>  :: getFront()
{
    return this->front;
}

template <class Type>
DoublyLinkedList<Type> * DoublyLinkedList<Type>  :: getEnd()
{
    return this->end;
}

template <class Type>
void DoublyLinkedList<Type>  :: setEnd(DoublyLinkedList<Type>  * end)
{
    this->end = end;
}

template <class Type>
void DoublyLinkedList<Type>  :: setFront(DoublyLinkedList<Type>  * front)
{
    this->front = front;
}

template <class Type>
void DoublyLinkedList<Type>  :: setSize(DoublyLinkedList<Type>  * size)
{
    this->size = size;
}
#endif /* DoublyLinkedList_h */
