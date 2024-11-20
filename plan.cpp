#include "plan.h"
#include "meal.h"
#include "meal.cpp"
using namespace std;
#include <string>

Plan::Plan(double planCalories, string _planName, std::array<double, 3> _split, int _numberOfMeals){
    planName = _planName;
    split = _split;
    numberOfMeals = _numberOfMeals;// Sets the number of meals per day, example 5
}


void Plan::setPlanCalories(double _planCalories)
{
    planCalories = _planCalories;
};

void Plan::setMacros() {
    
    double total = planCalories;
    double carbPercentage = split[0];
    double proteinPercentage = split[1];
    double fatPercentage = split[2];

    int _fats = (total*fatPercentage)/100;
    int _carbs = (total*carbPercentage)/100;
    int _proteins =(total*proteinPercentage)/100;

    int proteins = _proteins;
    int carbs = _carbs;
    int fats = _fats;
    std::cout<<"Macros portions set succesfully to "<<carbs<<endl;
    // Changes the ammount of proteins
}

int Plan::getNumberofMeals()
{
    return numberOfMeals;
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

Meal Plan::getEqualMeal()
{
    return meal1;
    return meal2;
    return meal3;
    return meal4;
    return meal5;
}

void Plan::showPlan(){
    std::cout << "Meal distribution:\n";
    for (int i = 0; i < numberOfMeals; ++i) {
        std::cout << "Meal " << i + 1 << ": " << mealCarbs[i] << " carbs, "<< mealProteins[i] << " proteins, "<< mealFats[i] << " fats\n";
    };
}

Meal Plan::setEqualMeal(int _numberOfMeals){
    setMacros();
    int numberOfMeals = getNumberofMeals();
    int carbs = 12; // Example total value
    int proteins = 9; 
    int fats = 5; 

   
    std::vector<int> mealCarbs{5, carbs / numberOfMeals};
    std::vector<int> mealProteins{5, proteins / numberOfMeals};
    std::vector<int> mealFats{5, fats / numberOfMeals};

    for (int i = 0; i < carbs % 5; ++i) {
        mealCarbs[i]++;
    }
    for (int i = 0; i < proteins % 5; ++i) {
        mealProteins[i]++;
    }
    for (int i = 0; i < fats % 5; ++i) {
        mealFats[i]++;
    };
    std::cout<<"Meals set correctly "<<endl;
    Meal meal1(mealCarbs[0], mealProteins[0], mealFats[0]);
}


