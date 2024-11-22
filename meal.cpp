#include "meal.h"
#include "user.h"
#include "food.h"
using namespace std;
#include <string>
Meal::Meal(): mealCarbs(50), mealFats(50), mealProteins(50), mealName("MEAL") {}
Meal::Meal(int _mealCarbs, int _mealProteins, int _mealFats){
    mealCarbs = _mealCarbs;
    mealProteins = _mealProteins;
    mealFats = _mealFats;
    //THE PROBLEM IS HERE
    /*
    carbohydrates.resize(_mealCarbs);
    proteins.resize(_mealProteins);
    fats.resize(_mealFats);
    */
    mealName = "no name";
}

void Meal::setName(string _mealName){
    mealName = _mealName;
}
string Meal:: getMealName(){
    return mealName;
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

std::vector<Protein> Meal::getProteins()
{
    return proteins;
}

std::vector<Carbohydrate> Meal::getCarbohydrates()
{
    return carbohydrates;
}

std::vector<Fats> Meal::getFats()
{
    return fats;
}

string Meal::showMealPortions()
{
    string meal = getMealName() + " " + getTime() + 
              "\nCarbs: " + std::to_string(getCarbPortions()) + 
              "\nProteins: " + std::to_string(getProteinPortions()) + 
              "\nFats: " + std::to_string(getFatsPortions());
    return meal;
}

//Maybe I'll add the other info later

string Meal::showMealProteins()
{
    string message="";
    for (int i=1; i< proteins.size(); i++){
        message = message + proteins[i].getName()+ "Cals: " + to_string(proteins[i].getCalories());     
    };
    return message;
   
}

string Meal::showMealCarbohydrates()
{
    string message="";
    for (int i=1; i< carbohydrates.size(); i++){
        message = message + carbohydrates[i].getName()+ "Cals: " + to_string(carbohydrates[i].getCalories());     
    };
    return message;
}

string Meal::showMealFats()
{
    string message="";
    for (int i=1; i< fats.size(); i++){
        message = message + fats[i].getName() + "Cals: " + to_string(fats[i].getCalories());     
    };
    return message;
}

string Meal::displayMeal(){ 
    mealName = getMealName();
    std::cout<<"Display meal passed "<<mealName<<std::endl;  
    string mealDisplay = "Foods of " + getMealName() +" meal display:" +"\n- Proteins:" +showMealProteins() + "\n- Carbohydrates: " + showMealCarbohydrates() + "\n- Fats: " + showMealFats();
    return mealDisplay;
}

