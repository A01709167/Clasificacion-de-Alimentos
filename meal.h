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
    std::array<int, 5> equalMeal;
    std::array<int, 3> mealMatrix;

public:
    // Constructor
    Meal(string _planName, string _mealName, string _time);

    // Methods
    void setName(string _name);
    void setTime(std::string _time);
    void setEqualMeal(std::array<int, 3> _equalmeal); //Divide las porciones equitativamente en la cantidad de comidas siendo la cena la última
    void editCarbs(int carbs);
    void editProteins(int proteins);
    void editFats(int fats);
    void showMeal();
};