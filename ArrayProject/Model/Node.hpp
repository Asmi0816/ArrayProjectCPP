//
//  Node.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 2/13/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nodePointer;
    
    
    
public:
    
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * pointer);
    
    Type getNodeData();
    Node<Type> * getNodePointer();
    void setNodeData(Type data);
    void setNodePointer(Node<Type> * next);

    
};




#endif /* Node_hpp */
