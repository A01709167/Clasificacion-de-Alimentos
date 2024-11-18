//A user has a meal plan which is composed of meals which is composed of portions 
#include <iostream>
#include <vector>
#include <array>

#ifndef PLAN_H
#define PLAN_H

using namespace std;


class Plan {
private:
    string planName;
    int numberOfMeals;
    double planCalories;
    int carbs;
    int proteins;
    int fats;
    vector<double> mealCarbs;
    vector<double> mealFats;
    vector<double> mealProteins;
    std::array<std::string, 5> meals;
    std::array<double,3> split; //carbs, proteins, fats percentage
    std::array<int, 3> equalMeal;
    

public:
    // Constructor
    Plan();
    Plan(double _planCalories, string _planName, std::array<double, 3> _split, int _numberOfMeals);
    // Methods
    void setPlanCalories(double _calories);
    std::vector<int> setMeals(int _numberOfMeals);
    void setMacros();

    int getNumberofMeals();
    int getCarbs();
    int getProteins();
    int getFats();

    std::array<std::string, 3 > seePortions(int portions); //Shows the portions of each group
    std::array<int, 3> equalSplit(int numberOfMeals, int carbs, int proteins, int fats); //I want this to be a variable array? How?
    void showPlan();
};

#endif