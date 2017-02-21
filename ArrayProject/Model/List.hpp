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
    Node<Type> * front;
    
public:
    List();
    List(const List<Type> & source);
    //Deconstructor
    ~List<Type>();
  
    //Helper Methods
    void addAtIndex(int index, Type value);
    void setAtIndex(int index, Type data);
    Type getFromIndex(int index);
    void add(Type value);
    Type remove(int index);
    Type contains(Type data);
    int getSize() const;
    Node<Type> * getFrontIndex() const;
    Type getFrontIndex();
};

template <class Type>
List<Type> :: List()
{
    
}

template <class Type>
void List<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Node<Type> * current = front;
    for(int spot = 0; spot < index; spot++)
    {
        current = current -> getNodePointer();
    }
    current-> setNodeData(value);
}






#endif /* List_h */
