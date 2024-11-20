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
    
    std::array<double,3> split; //carbs, proteins, fats percentage
    std::array<Meal, 5> mealMatrix;

    Meal meal1;
    Meal meal2;
    Meal meal3;
    Meal meal4;
    Meal meal5;

    

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

    Meal setEqualMeal(int _numberOfMeals);
    Meal getEqualMeal();


    void showPlan();

};

#endif
