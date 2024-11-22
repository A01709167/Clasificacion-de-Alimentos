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
class Meal{ 
private:
    string planName;
    string mealName;
    string time;

    int mealCarbs;
    int mealProteins;
    int mealFats;

    //I didn't declare this first as I did not know how to add an undefined ammount of each
    std::vector<Carbohydrate> carbohydrates; 
    std::vector<Protein> proteins; 
    std::vector<Fats> fats;
    

public:
    // Constructor
    Meal();
    Meal(int _mealCarbs, int _mealProteins, int _mealFats);
    //Default constructor

    //GETTERS
    void setName(string _name);
    string getMealName();
    void setMealMacros(int _mealCarbs, int _mealFats, int _mealProteins);

    void setTime(std::string _time);
    string getTime();

    int getCarbPortions();
    int getFatsPortions();
    int getProteinPortions();

    void setCarbs(vector <Carbohydrate> _carbs);
    void setProteins(vector<Protein> _proteins);
    void setFats(vector <Fats> _fats);

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