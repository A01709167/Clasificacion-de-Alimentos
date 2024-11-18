//A user has a meal plan which is composed of meals which is composed of portions 
#include <iostream>
#include <vector>
#include <array>
#include "user.h"

#ifndef PLAN_H
#define PLAN_H

using namespace std;

class User; //i don't know what's this for, but i cannot move forward without this

class Plan : public User {
private:
    string planName;
    int numberOfMeals;
    double planCalories;
    int carbs;
    int proteins;
    int fats;
    std::array<std::string, 10> meals;
    std::array<double,3> split; //carbs, proteins, fats percentage
    std::array<std::int, 3> equalMeal;

public:
    // Constructor
    Plan(string _planName, std::array<double, 3> _split, int _numberOfMeals);
    // Methods

    void setMeals(int _numberOfMeals);
    void setMacros();

    int getNumberofMeals();
    int getCarbs();
    int getProteins();
    int getFats();

    std::array<std::string, 3 > seePortions(int portions); //Shows the portions of each group
    std::array<int, 3> equalSplit(int numberOfMeals, int carbs, int proteins, int fats); //I want this to be a variable array? How?
    std::array<std::string, 10> showPlan(const std::array<std::string, 10>& plan);
};

#endif