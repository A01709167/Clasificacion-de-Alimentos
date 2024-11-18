#include "Plan.h"
#include "user.h"

Plan::Plan(string _planName, std::array<double, 3> _split, int _numberOfMeals){
    planName = _planName;
    split = _split;
    numberOfMeals = _numberOfMeals;// Sets the number of meals per day, example 5
}

void setMacros() {
    double total = getCalories();
    double carbPercentage = split[0];
    double proteinPercentage = split[1];
    double fatPercentage = split[2];

    int _fats = (total*fatPercentage)/100;
    int _carbs = (total*carbPercentage)/100;
    int _proteins =(total*proteinPercentage)/100;

    proteins = _proteins;
    carbs = _carbs;
     fats = _fats;
    std::cout<<"Macros portions set succesfully to "<<carbs<<endl;
    // Changes the ammount of proteins
}

int getNumberofMeals()
{
    return numberOfMeals();
}

int getCarbs()
{
    return carbs;
}

int getProteins()
{
    return proteins;
}

int getFats()
{
    return fats;
}

void setMeals(int _numberOfMeals)
{
    int numberOfMeals = _numberOfMeals;
    int carbs = 12; // Example total value
    int proteins = 9; // Example total value
    int fats = 5; // Example total value

    // Arrays to hold the distribution for each meal
    std::vector<int> mealCarbs(numberOfMeals, carbs / numberOfMeals);
    std::vector<int> mealProteins(numberOfMeals, proteins / numberOfMeals);
    std::vector<int> mealFats(numberOfMeals, fats / numberOfMeals);

    for (int i = 0; i < carbs % numberOfMeals; ++i) {
        mealCarbs[i]++;
    }
    for (int i = 0; i < proteins % numberOfMeals; ++i) {
        mealProteins[i]++;
    }
    for (int i = 0; i < fats % numberOfMeals; ++i) {
        mealFats[i]++;
    };

}


std::array<std::string, 10> Plan::showPlan(const std::array<std::string, 10>& plan) {
    // Implementation goes here
    return plan; // returns plan
}
