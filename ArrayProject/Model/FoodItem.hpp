//
//  foodItem.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 3/13/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef foodItem_hpp
#define foodItem_hpp

#include <string>
using namespace std;

class FoodItem
{
private:
    int calories;
    string foodName;
    double cost;
    bool delicious;
    
    
public:
    FoodItem();
    FoodItem(string name);
    
    int getCalories();
    string getFoodName();
    double getCost();
    bool isDelicious();
    
    void setCalories(int calories);
    void setFoodName(string name);
    void setCost(double cost);
    void isDelicious(bool delicious);
    
    
    bool operator < (FoodItem & otherFood);
    bool operator > (FoodItem & otherFood);
    bool operator == (FoodItem & otherFood);
    
};

#endif /* foodItem_hpp */
