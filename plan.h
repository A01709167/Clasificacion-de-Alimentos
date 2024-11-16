//A user has a meal plan which is composed of meals which is composed of portions 
#include <iostream>
#include <vector>
#include <array>
#include "user.h"

using namespace std;

class Plan : public User {
private:
    int numberOfMeals;
    double calories;
    int carbs;
    int proteins;
    int fats;
    std::array<std::string, 10> meals;

public:
    // Constructor
    Plan(const std::string& name, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split, int numberOfMeals);

    // Methods
    void setMeals(int meals, double calories);
    int setCarbs(int carbs, double calories);
    int setFats(int fats, double calories);
    std::array<std::string, 3 > seePortions(int portions); //Shows the portions of each group
    std::array<int, 3> equalSplit(int numberOfMeals, int carbs, int proteins, int fats); //I want this to be a variable array? How?
    std::array<std::string, 10> showPlan(const std::array<std::string, 10>& plan);
    int setProteins(int proteins, double calories);
};

