//
//  ArrayController.cpp
//  ArrayProject
//
//  Created by Smith, Arick on 2/6/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#include "ArrayController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"
using namespace std;

void ArrayController :: start()
{
    // This is an array
    /* 
    int intArray[4];
    intArray[0] = 4;
    intArray[1] = 6;
    intArray[2] = 8;
    intArray[3] = 10;
    
    double doubleArray[4] = {23.23, 34.34, 45.45, 56.56};
    int userChoice;
    cout << intArray[3] << endl;
    cout << "Choose a position of doubleArray between 0 and 3" << endl;
    cin >> userChoice;
    if(userChoice > 3 || userChoice < 0)
    {
        cout << "Sorry but that is out of bounds" << endl;
    }
    else
    {
    cout << "The value of " << userChoice << " is " << doubleArray[userChoice] << endl;
    }
    */
    
    cout << "Starting the project" << endl;
    
    cout << "Switching to the array testing" << endl;
    testNodes();
    cout << "Finished testing" << endl;
}

ArrayController :: ArrayController()
{
    wordNode = Node<string>();
    numberNode = Node<int>();
}

void ArrayController :: testNodes()
{
    cout << "Here is the Node<string>" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}

void ArrayController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    for(int cute = 0; cute < 3; cute++)
    {
        cout << temp.getFromIndex(cute) << " Is at spot  " << cute << endl;
    }
    
    cout << "Testing input" << endl;
    
    for(int index = 0; index < 3; index++)
    {
        temp.setAtIndex(index, index);
        
    }
    for(int index = 0; index< 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}


