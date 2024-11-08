#include <iostream>
using namespace std;
#include "plan.h"

// Class representing an individual meal
class Meal : public Plan {
private:
    std::string name;
    std::string time;
    int carbs;
    int proteins;
    int fats;

public:
    // Constructor
    Meal(const std::string& planName, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split, int numberOfMeals, const std::string& mealName, const std::string& time);

    // Methods
    void equalMeal();
    void editCarbs();
    void editProteins();
    void editFats();
    void seeMeal();
};