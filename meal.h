//A user has a plan which has meals. A meal is composed of portions of foods, eg. 3 portions of carbohydrates.
#include <iostream>
using namespace std;
#include "plan.h"

// Class representing an individual meal
class Meal : public Plan {
private:
    string planName;
    string mealName;
    string time;

    int carbs;
    int proteins;
    int fats;
//Here meal has foods, but we don't know how many !!!!

public:
    // Constructor
    Meal(int _carbs, int _proteins, int _fats);

    // Methods
    void setName(string _name);
    string getMealName();

    void setTime(std::string _time);
    string getTime();

    void setCarbs(int _carbs);
    void setProteins(int _proteins);
    void setFats(int _fats);
    

    int getCarbPortions();
    int getFatsPortions();
    int getProteinPortions();

    std::vector<int> setBaseMeals(int _numberOfMeals);

    string showMeal();
};