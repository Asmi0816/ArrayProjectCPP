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
List<Type> :: List(const List<Type> & source)
{
    this->size = toBeCopied.getSize();
    
    //Builds Data Structures
    this->front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * temp = new Node<Type>();
        temp->setNodePointer(front);
        front = temp;
    }
    
    
    
    Node<Type> * copyTemp = toBeCopied.getFront();
    Node<Type> * updated = this->front;
    for(int index = 0; index < size; index++)
    {
        updated -> setNodeData(copyTemp->getNodeData());
        updated = updated -> getNodePointer();
        copyTemp = copyTemp -> getNodePointer();
    }
    
    
    
    
}

template <class Type>
List<Type> :: ~List()
{
    int count = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        //Move to next node in array
        front = front->getNodePointer();
        cout<< "Moving to the next node. At: " << count << endl;
        //Delete the front pointer
        delete remove;
        cout << "Deleting the old front pointer." << endl;
        //Move deletetothe new front.
        remove=front;
        cout << "Moving to new front pointer>" << endl;
        count--;
        cout << "Front is at: " << front << " count is: " << count << endl;
    }
}




#endif /* List_h */
