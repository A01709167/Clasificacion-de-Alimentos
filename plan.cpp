#include "plan.h"
Plan::Plan(double planCalories, string _planName, std::array<double, 3> _split, int _numberOfMeals){
    planName = _planName;
    split = _split;
    numberOfMeals = _numberOfMeals;// Sets the number of meals per day, example 5
}
Plan::Plan()
{
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

std::vector<int> Plan::setMeals(int _numberOfMeals)
{
    setMacros();
    int numberOfMeals = getNumberofMeals();
    int carbs = 12; // Example total value
    int proteins = 9; 
    int fats = 5; 

    std::vector<int> mealCarbs{numberOfMeals, carbs / numberOfMeals};
    std::vector<int> mealProteins{numberOfMeals, proteins / numberOfMeals};
    std::vector<int> mealFats{numberOfMeals, fats / numberOfMeals};

    for (int i = 0; i < carbs % numberOfMeals; ++i) {
        mealCarbs[i]++;
    }
    for (int i = 0; i < proteins % numberOfMeals; ++i) {
        mealProteins[i]++;
    }
    for (int i = 0; i < fats % numberOfMeals; ++i) {
        mealFats[i]++;
    };
    std::cout<<"Meals set correctly "<<endl;
    return mealCarbs;
    return mealProteins;
    return mealFats;

}

void Plan::showPlan(){
    std::cout << "Meal distribution:\n";
    for (int i = 0; i < numberOfMeals; ++i) {
        std::cout << "Meal " << i + 1 << ": " << mealCarbs[i] << " carbs, "<< mealProteins[i] << " proteins, "<< mealFats[i] << " fats\n";
    };
}
    


