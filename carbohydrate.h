//Carbohydrates is the first of the three macronutrients. Almost a 50% of our diet must come from carbohydrates, unless  you choose another diet like Keto where carbs won't be considered.
#ifndef CARBOHYDRATE_H
#define CARBOHYDRATE_H

#include <string>
#include <vector>
#include "food.h"

class Carbohydrate : public Food{
private:
    string name;
    double calories;
    double carbs; 
    double proteins;
    double fats;
    double sugar; //Here we enter the Grams of sugar the food has
    double fiber; //here we enter the GRAMS of Dietary Fiber the food has
    std::string type; //if it's a fruit, vegetable or other

public:
    void setSugar(double sugar);
    void setFiber(double fiber);
    void setType(string _type);
    void defPortion();
    double getSugar();
    double getFiber();
    string getType();
    
    //CONSTRUCTOR
    Carbohydrate();
    Carbohydrate(string _name, double _calories, double _carbs, double _proteins, double _fats, double _sugar, double _fiber);
    bool isHealthy();
    string show(); //just shows its info
};

#endif // CARBOHYDRATE_H
