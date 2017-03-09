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
#include "../Model/CircularList.hpp"
#include "../Model/Queue.hpp"
#include "../Model/Stack.hpp"
#include "../Model/DoubleList.hpp"
#include "../Model/DoublyLinkedList.hpp"
#include "../Model/BiDirectionalNode.hpp"
#include "../Model/Timer.hpp"

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
    void testListIntro();
    void testListTiming();
    
public:
    ArrayController();
    void start();
    
};



#endif /* ArrayController_hpp */
