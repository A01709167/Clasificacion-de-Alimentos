#include "meal.h"
#include "user.h"
#include "food.h"
using namespace std;
#include <string>
Meal::Meal(): mealCarbs(10), mealFats(11), mealProteins(12), mealName("MEAL") {}
Meal::Meal(int _mealCarbs, int _mealProteins, int _mealFats){
    mealCarbs = _mealCarbs;
    mealProteins = _mealProteins;
    mealFats = _mealFats;
    mealName = "MyMeal";
    carbohydrates = std::vector<Carbohydrate>(3, Carbohydrate()); 
    proteins = std::vector<Protein>(4, Protein()); 
    fats = std::vector<Fats>(5, Fats());
    proteins.resize(mealProteins);
    carbohydrates.resize(mealCarbs);
    fats.resize(mealFats);
}


void Meal::setName(string _mealName){
    mealName = _mealName;
}
string Meal:: getMealName(){
    return mealName;
}

void Meal::setMealMacros(int _mealCarbs, int _mealFats, int _mealProteins){  

    mealProteins = _mealProteins;  
    mealFats = _mealFats;
    mealCarbs = _mealCarbs;
    carbohydrates.resize(mealCarbs);
    proteins.resize(mealProteins);
    fats.resize(mealFats);
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
              "\n     -Carbs: " + std::to_string(getCarbPortions()) + 
              "\n     -Proteins: " + std::to_string(getProteinPortions()) + 
              "\n     -Fats: " + std::to_string(getFatsPortions());
    return meal;
}

//Maybe I'll add the other info later

string Meal::showMealProteins()
{
    string message="";
    int size = getProteinPortions();
    for (int i=1; i< size; i++){
        message = message +"\n"+ proteins[i].getName()+ "  |  Cals: " + to_string(proteins[i].getCalories());     
    };
    return message;
   
}

string Meal::showMealCarbohydrates()
{
    int size =getCarbPortions();
    string message="";
    for (int i=1; i< size; i++){
        message = message +"\n" +carbohydrates[i].getName()+ "  |  Cals: " + to_string(carbohydrates[i].getCalories())+ "  |  Portion: " + to_string(carbohydrates[i].getPortionSize());     
    };
    return message;
}

string Meal::showMealFats()
{
    int size =getFatsPortions();
    string message="";
    for (int i=1; i< size; i++){
        message = message +"\n" +fats[i].getName()+ "  |  Cals: " + to_string(fats[i].getCalories());     
    };
    return message;
}

string Meal::displayMeal(){ 
    mealName = getMealName();
    string mealDisplay = "Foods of " + getMealName() +":" +"\n- Proteins:" +showMealProteins() + "\n\n- Carbohydrates: " + showMealCarbohydrates() + "\n\n- Fats: " + showMealFats();
    mealDisplay += "\n-------------";
    return mealDisplay;
}

