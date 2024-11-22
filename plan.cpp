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
    setCarbsPortions(carbs);
    setProteinPortions(proteins);
    setFatsPortions(fats);


    //These are the portions of each macro
    
    std::cout<<"Macros CALORIES set succesfully to Carbs  "<<_fats<<" proteins: "<<_proteins<<" fats: "<<_carbs<<std::endl;
    std::cout<<"Macros PORTIONS set to Carbs  "<<carbs<<" proteins: "<<proteins<<" fats: "<<fats<<std::endl;
    // Changes the ammount of proteins
}

void Plan::setNumberOfMeals(int _numberOfMeals)
{   numberOfMeals = _numberOfMeals;
}

void Plan::setCarbsPortions(int _carbs)
{   carbs= _carbs;
}

void Plan::setProteinPortions(int _proteins)
{   proteins = _proteins;
}

void Plan::setFatsPortions(int _fats)
{   fats= _fats;
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

string Plan::getPlanName()
{
    return planName;
}

std::array<double, 3> Plan::getSplit()
{
    return split;
}

void Plan::setMealsNames(int opcion, string name)
{
    vector <Meal> _meals = getMeals();
    Meal _meal = _meals[opcion];
    _meal.setName(name);
    _meals[opcion] = _meal;
    meals = _meals;
}

std::vector<Meal> Plan::setMeals()
{ // Distributes the macros found before into the number of meals
    vector<string> names = getMealsNames();
    int numberOfMeals = getNumberOfMeals();
    int carbs = getCarbs();
    int proteins = getProteins();
    int fats = getFats();
    std::vector<Meal> _meals(numberOfMeals, Meal());
    
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
        _meals[i].setMealMacros(mealCarbs, mealFats, mealProteins);
    }
    meals = _meals;
    return meals;
}

std::vector<Meal> Plan::getMeals(){
    return meals;
}

string Plan::showMacros()
{   string carbs = to_string(getCarbs());
    string proteins = to_string(getProteins());
    string fats = to_string(getFats());
    string message = "-----------------\nYour PLan Macros: \n- Carbs: "+carbs + "  - Proteins " + proteins +"  -Fats: "+ fats+"-----------------\n";
    return message;
}

string Plan::showPlan(){
    int numberOfMeals = meals.size();
    std::vector<Meal> meals = getMeals();
    string name = getPlanName();
    string message = "\n--------------------\nPLAN " + name;

    for (int i = 0; i < numberOfMeals; ++i){
          message += "\n"+ meals[i].showMealPortions()+"\n";
    };
    message  +=  "\n--------------------\n";
    return message;
}

void Plan::showPlanMeals()
{ // no sale imprimir un vector de meals, recomiendo ir a meal y escribir una funcion de displayMeal
    std::vector<Meal> meals = getMeals();
    std::cout<<"\n\nSHOW PLAN mealss started: "<<std::endl;
    int numberOfMeals = getNumberOfMeals();
    for (int i = 0; i < numberOfMeals; ++i) {//i is less than meals size
        std::cout<<"Show this meal: " << meals[i].getMealName()<<meals[i].showMealFats()<<std::endl;
    };
    
    std::cout<<"Show Plan ended"<<std::endl;
}

vector<string> Plan::getMealsNames()
{
    return mealsNames;
}
