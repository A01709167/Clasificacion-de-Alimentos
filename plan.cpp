#include <iostream>
#include "user.h"
#include "plan.h"
#include "meal.h" 
using namespace std;
#include <string>


Plan::Plan(double planCalories, std::array<double, 3> _split, int _numberOfMeals)
{
    split = _split;
    numberOfMeals = _numberOfMeals;// Sets the number of meals per day, example 5
    meals.resize(numberOfMeals);
}

void Plan::setSplit( std::array<double,3> _split)
{   split=_split;
}

void Plan::setMacros(double planCalories)
{ // this comes from the split (in fact, i could've called the split macros)
    std::array<double, 3> _split = getSplit();
    double total = planCalories; //aún no recibe las calorias del user
    double carbPercentage = _split[0];
    double proteinPercentage = _split[1];
    double fatPercentage = _split[2];

    int _fats = (total*fatPercentage)/100;
    int _carbs = (total*carbPercentage)/100;
    int _proteins =(total*proteinPercentage)/100;

    int carbs = _carbs/77;
    int proteins = _proteins / 70;
    int fats = _fats / 45;

    //These are the portions of each macro
    
    std::cout<<"Macros CALORIES set succesfully to Carbs  "<<_fats<<" proteins: "<<_proteins<<" fats: "<<_carbs<<std::endl;
    std::cout<<"Macros PORTIONS set to Carbs  "<<carbs<<" proteins: "<<proteins<<" fats: "<<fats<<std::endl;
    // Changes the ammount of proteins
}

void Plan::setNumberOfMeals(int _numberOfMeals)
{   numberOfMeals = _numberOfMeals;
}

int Plan::getCarbs()
{
    return carbs;
}

int Plan::getProteins()
{
    return proteins;
}

int Plan::getFats()
{
    return fats;
}

int Plan::getNumberOfMeals()
{
    return numberOfMeals;
}

std::array<double, 3> Plan::getSplit()
{
    return split;
}

std::vector<Meal> Plan::setMeals(){ //Distributes the macros found before into the number of meals
    std::vector<Meal> meals;
    int numberOfMeals = getNumberOfMeals();
    int carbs = getCarbs();
    int proteins = getProteins();
    int fats = getFats();

    int baseCarbs = carbs / numberOfMeals;
    int baseProteins = proteins / numberOfMeals;
    int baseFats = fats / numberOfMeals;

    int extraCarbs = carbs % numberOfMeals;
    int extraProteins = proteins % numberOfMeals;
    int extraFats = fats % numberOfMeals;

    for (int i = 0; i < numberOfMeals; ++i){
        
        int mealCarbs = baseCarbs + (i < extraCarbs ? 1 : 0);
        int mealProteins = baseProteins + (i < extraProteins ? 1 : 0);
        int mealFats = baseFats + (i < extraFats ? 1 : 0);
        meals.emplace_back(mealCarbs, mealProteins, mealFats); //THIS CREATES several objects type MEAL that recieve the INT of the mealCarbs (the portions, then the meal has to be constructed)
    }
    std::cout<<"Set meals ended "<<endl;
    
    return meals;
}


std::vector<Meal> Plan::getMeals(){
    return meals;
}

string Plan::showMacros()
{   string carbs = to_string(getCarbs());
    string proteins = to_string(getProteins());
    string fats = to_string(getFats());
    string message = "SHOWING MACROS Carbs: "+carbs + "Proteins " + proteins +"Fats: "+ fats;
    return message;
}

void Plan::showPlan(){ //no sale imprimir un vector de meals, recomiendo ir a meal y escribir una funcion de displayMeal
    std::vector<Meal> _meals = getMeals();
    int _numberOfMeals = numberOfMeals;
    for (int i = 0; i < _numberOfMeals; ++i) {//i is less than meals size
        std::cout << _meals[i].displayMeal()<<std::endl;
    };
    std::cout<<"Show Plan ended"<<std::endl;
}

