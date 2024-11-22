//A user has a meal plan which is composed of meals which is composed of portions 
#include <iostream>
#include <vector>
#include <array>
#include "meal.h"
#ifndef PLAN_H
#define PLAN_H

using namespace std;


class Plan {
private:
    std::vector<Meal> meals; //A PLAN HAS MEALS
    std::vector<string> mealsNames;

    string planName;
    double planCalories;
    int numberOfMeals;

    int carbs=10;
    int proteins=11;
    int fats=12;
        
    int baseCarbs;
    int baseProteins;
    int baseFats;

    int extraCarbs;
    int extraProteins;
    int extraFats; 
    
    std::array<double,3> split; //carbs, proteins, fats percentage 


public:
    //Default constructor
    Plan(): planCalories(3000), split({0.0, 0.0, 0.0}), numberOfMeals(5) {}
    // Constructor
    Plan(double _planCalories, std::array<double, 3> _split, int _numberOfMeals);

    //GETTERS
    int getCarbs();
    int getProteins();
    int getFats();
    int getNumberOfMeals();
    string getPlanName();
    std::array<double,3> getSplit();

    // Methods
    void setSplit(std::array<double,3> split);
    void setMacros(double planCalories); //done, returns int carb, proteins and fats for the whole plan
    void setNumberOfMeals(int _numberOfMeals);

    void setCarbsPortions(int _carbs);
    void setProteinPortions(int _proteins);
    void setFatsPortions(int _fats);

    void setMealsNames(int opcion, string name);
    void insertMealCarb(int mealI, int carbI, Carbohydrate carb);
    void insertMealProteins(int mealI, int proteinI, Protein protein);
    void insertMealFat(int mealI, int fatI, Fats fat);
    std::vector<Meal> setMeals();

    std::vector<Meal> getMeals();
    string showMacros();

    string showPlan();
    void showPlanMeals();


};

#endif
