#include "meal.h"
#include "user.h"
#include "food.h"
#include "plan.h"
using namespace std;
#include <string>


void Meal::setName(string _mealName){
    mealName = _mealName;
}
string Meal:: getMealName(){
    return mealName;
}

Meal::Meal(int _mealCarbs, int _mealProteins, int _mealFats)
{
    carbohydrates.resize(_mealCarbs);
    proteins.resize(_mealProteins);
    fats.resize(_mealFats);
}

void Meal::setTime(string _time)
{
    time = _time;
}

string Meal::getTime()
{
    return time;
}

int Meal::getCarbPortions()
{
    return mealCarbs;
}

int Meal::getFatsPortions()
{
    return mealFats;
}

int Meal::getProteinPortions()
{
    return mealProteins;
}


string Meal::showMeal()
{
    string meal = getMealName() + " " + getTime() + 
              "\nCarbs: " + std::to_string(getCarbPortions()) + 
              "\nProteins: " + std::to_string(getProteinPortions()) + 
              "\nFats: " + std::to_string(getFatsPortions());
    return string();
}
