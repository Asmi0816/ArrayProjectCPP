//
//  ArrayController.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 2/6/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef ArrayController_hpp
#define ArrayController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.hpp"
#include <string>

using namespace std;

class ArrayController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
    
public:
    ArrayController();
    void start();
    
};

#endif /* ArrayController_hpp */
