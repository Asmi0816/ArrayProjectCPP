//
//  FileController.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 3/27/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.hpp"
#include "../Model/FoodItem.hpp"
#include "../Model/CrimeData.hpp"
#include <string> // String access
#include <fstream> // File operations
#include <iostream> // Console thing
#include <sstream> // String as stream


using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
    
    
public:
    DoubleList<FoodItem> readDataFromFile(string filename);
    void writeFoodDataStatistics(DoubleList<FoodItem> source, string fileName);
};






#endif /* FileController_hpp */
