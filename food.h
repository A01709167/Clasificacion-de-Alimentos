//Food is a class used to enter different foods, like apple or jam. Foods have their own properties and foods can be divided into three macronutrients (carbs, proteins and fats)
#ifndef FOOD_H
#define FOOD_H
#include <iostream>
using namespace std;

class Food {
protected:
    string name;
    double calories; //per 100 g
    double carbs;
    double proteins;
    double fats;
    double portionSize;
    string group; // what group does the food belongs to

public:
    Food();
    Food(string _name, double _calories, double _carbs, double _proteins, double _fats);
    string getName();
    double getCalories(); 
    double getCarbs(); //THis is usually represented in the nutritional label in a percentage of the whole
    double getProteins();
    double getFats();
    double getPortionSize();
    string getGroup();
    void setPortionSize(double);
    void setGroup(string); //this value is changed by the program
    double portion();
    int defineGroup();
    string showFood();
};

#endif