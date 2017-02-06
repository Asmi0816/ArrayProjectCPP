//
//  ArrayController.cpp
//  ArrayProject
//
//  Created by Smith, Arick on 2/6/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#include "ArrayController.hpp"
#include <iostream>

using namespace std;

void ArrayController :: start()
{
    // This is an array
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
}
