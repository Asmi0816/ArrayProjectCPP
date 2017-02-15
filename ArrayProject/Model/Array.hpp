//
//  Array.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 2/15/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>

template <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
    
public:
    array();
    array(int size);
    
    setAtIndex(int index, Type value);
    getFromIndex(int index);
    getSize();
    
};

template <class Type>
Array<Type> :: Array()
{
    
    
    
    
    
    
}
#endif /* Array_h */
