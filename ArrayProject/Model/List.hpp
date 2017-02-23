//
//  List.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 2/21/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef List_h
#define List_h

#include "assert.h"
#include "Node.hpp"

template <class Type>
class List
{
private:
    int size;
    Node<Type> * end;
    Node<Type> * front;
    
public:
    List();
    List(const List<Type> & source);
    //Deconstructor
    ~List<Type>();
  
    //Helper Methods
    void addAtIndex(int index, Type value);
    Type setAtIndex(int index, Type data);
    Type getFromIndex(int index);
    void addFront(Type value);
    void addEnd(Type data);
    Type remove(int index);
    Type contains(Type data);
    int getSize() const;
    Node<Type> * getFrontIndex() const;
    Type getFrontIndex();
};

template <class Type>
List<Type> :: List()
{
    this->size = 0;
    this-> front = nullptr;
    this-> end = nullptr;
}

template <class Type>
void List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * first = new Node<Type>(value);
        this->front = first;
        this->end = first;
    }
    else
    {
        Node<Type> * newFirst = new Node<Type>();
        newFirst -> setNodeData(value);
        newFirst -> setNodePointer(front);
        this->front = newFirst;
        
    }
    size++;
}

template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
        
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    size++;
}

template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        previous->
    }
}





#endif /* List_h */
