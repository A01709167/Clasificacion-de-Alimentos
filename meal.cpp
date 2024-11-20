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

Meal::Meal(int _carbs, int _proteins, int _fats)
{
    carbs = _carbs;
    proteins = _proteins;
    fats = _fats;
}

void Meal::setTime(string _time)
{
    time = _time;
    // Sólo dice la hora en la que se comerá (mañana, tarde)
}

string Meal::getTime()
{
    return time;
}

void Meal::setCarbs(int _carbs)
{
    carbs  =_carbs;
}

void Meal::setProteins(int _proteins)
{
    proteins = _proteins;
}

void Meal::setFats(int _fats)
{
    fats = _fats;
}


int Meal::getCarbPortions()
{
    return carbs;
}

int Meal::getFatsPortions()
{
    return fats;
}

int Meal::getProteinPortions()
{
    return proteins;
}


string Meal::showMeal()
{
    string meal = getMealName() + " " + getTime() + 
              "\nCarbs: " + std::to_string(getCarbPortions()) + 
              "\nProteins: " + std::to_string(getProteinPortions()) + 
              "\nFats: " + std::to_string(getFatsPortions());
    return string();
}
