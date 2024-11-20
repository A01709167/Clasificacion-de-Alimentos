//A user has a meal plan which is composed of meals which is composed of portions 
#include <iostream>
#include <vector>
#include <array>

#ifndef PLAN_H
#define PLAN_H

using namespace std;


class Plan {
private:
    std::vector<Meal> meals; //A PLAN HAS MEALS

    string planName;
    int numberOfMeals;
    double planCalories;

    int carbs;
    int proteins;
    int fats;
        
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
    int getNumberofMeals();
    int getCarbs();
    int getProteins();
    int getFats();

    // Methods
    void setPlanCalories(double _calories); //done
    void setMacros(); //done, returns int carb, proteins and fats for the whole plan


    std::vector<Meal> setMeals();

    std::vector<Meal> getMeals();

    void showPlan();

};

#endif
