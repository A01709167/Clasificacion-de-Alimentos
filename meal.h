//A user has a plan which has meals. A meal is composed of portions of foods, eg. 3 portions of carbohydrates.
#ifndef MEAL_H
#define MEAL_H

#include <iostream>
#include <vector>
using namespace std;
//borré plan .h
#include "fats.h"
#include "carbohydrate.h"
#include "protein.h"



// Class representing an individual meal
class Meal{ //maybe meal doesn't have to inherit that from plan
private:
    string planName;
    string mealName;
    string time;

    int mealCarbs;
    int mealProteins;
    int mealFats;

    //I didn't declare this first as I did not know how to add an undefined ammount of each
    std::vector <Protein> proteins;
    std::vector <Fats> fats;
    std::vector <Carbohydrate> carbohydrates;

public:
    // Constructor
    Meal(int _mealCarbs, int _mealProteins, int _mealFats);
    //Default constructor
    Meal(): mealCarbs(10), mealProteins(15), mealFats(30), mealName("EXAMPLE"){};

    //GETTERS
    void setName(string _name);
    string getMealName();

    void setTime(std::string _time);
    string getTime();

    int getCarbPortions();
    int getFatsPortions();
    int getProteinPortions();

    std::vector <Protein> getProteins();
    std::vector <Carbohydrate> getCarbohydrates();
    std::vector <Fats> getFats();

    // Methods
    string showMealPortions();

    string showMealProteins();
    string showMealCarbohydrates();
    string showMealFats();

    string displayMeal();
};

#endif