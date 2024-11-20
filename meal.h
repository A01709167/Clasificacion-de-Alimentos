//A user has a plan which has meals. A meal is composed of portions of foods, eg. 3 portions of carbohydrates.
#include <iostream>
#include <vector>
using namespace std;
#include "plan.h"
#include "fats.h"
#include "carbohydrate.h"
#include "protein.h"

// Class representing an individual meal
class Meal : public Plan {
private:
    string planName;
    string mealName;
    string time;

    int mealCarbs;
    int mealProteins;
    int mealFats;

    //I didn't declare this first as I did not know how to add an undefined ammount of each
    std::vector <Protein> proteins;
    std::vector <Fats> fats;
    std::vector <Carbohydrate> carbohydrates;

public:
    // Constructor
    Meal(int _mealCarbs, int _mealProteins, int _mealFats);

    //GETTERS
    void setName(string _name);
    string getMealName();

    void setTime(std::string _time);
    string getTime();

    int getCarbPortions();
    int getFatsPortions();
    int getProteinPortions();

    // Methods
    string showMeal();
};