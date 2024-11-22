#include "meal.h"
#include "user.h"
#include "food.h"
using namespace std;
#include <string>
#include <sstream>
#include <iomanip>

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

void Meal::setCarbs(vector<Carbohydrate> _carbs)
{ 
    carbohydrates=_carbs;
}

void Meal::setProteins(vector<Protein> _proteins)
{
    proteins = _proteins;
}

void Meal::setFats(vector<Fats> _fats)
{
    fats = _fats;
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
    std::ostringstream oss; oss << std::fixed << std::setprecision(1); 
    std::string message = ""; 
    int size =getProteinPortions();
    vector <Protein> proteinv = getProteins();

    for (int i=1; i< size; i++){
        oss.str(""); // Clear the stream 
        oss << std::fixed << std::setprecision(1) << proteinv[i].getCalories(); 
        std::string caloriesStr = oss.str();
        oss.str(""); // Clear the stream again 
        oss << std::fixed << std::setprecision(1) << proteinv[i].getPortionSize(); 
        std::string portionfStr = oss.str(); message += proteinv[i].getName() + " | Cals: " + caloriesStr + " | Portion: " + portionfStr + "\n"; 
        }
    return message;
   
}

string Meal::showMealCarbohydrates()
{
    std::ostringstream oss; 
    oss << std::fixed << std::setprecision(1); 
    int size =getCarbPortions();
    vector <Carbohydrate> carbs = getCarbohydrates();
    string message="";
    for (int i=1; i< size; i++){
        oss.str(""); // Clear the stream 
        oss << std::fixed << std::setprecision(1) << carbs[i].getCalories(); 
        std::string caloriesStr = oss.str();
        oss.str(""); // Clear the stream again 
        oss << std::fixed << std::setprecision(1) << carbs[i].getPortionSize(); 
        std::string portionfStr = oss.str(); message += carbs[i].getName() + " | Cals: " + caloriesStr + " | Portion: " + portionfStr + "\n"; 
    };
    return message;
}

string Meal::showMealFats()
{
    std::ostringstream oss; 
    oss << std::fixed << std::setprecision(1); 
    int size =getFatsPortions();
    vector <Fats> fatsv = getFats();
    string message="";
    for (int i=1; i< size; i++){
        oss.str(""); // Clear the stream 
        oss << std::fixed << std::setprecision(1) << fatsv[i].getCalories(); 
        std::string caloriesStr = oss.str();
        oss.str(""); // Clear the stream again 
        oss << std::fixed << std::setprecision(1) << fatsv[i].getPortionSize(); 
        std::string portionfStr = oss.str(); message += fatsv[i].getName() + " | Cals: " + caloriesStr + " | Portion: " + portionfStr + "\n"; 
    };
    return message;
}

string Meal::displayMeal(){ 
    std::ostringstream oss; 
    oss << std::fixed << std::setprecision(1);
    string mealDisplay = "Foods of " + getMealName() +":" +"\n- Proteins:\n" +showMealProteins() + "\n\n- Carbohydrates: \n" + showMealCarbohydrates() + "\n\n- Fats: \n" + showMealFats();
    mealDisplay += "\n-------------";
    return mealDisplay;
}

