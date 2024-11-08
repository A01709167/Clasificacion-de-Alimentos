#include <iostream>
#include <vector>
#include "user.h"
using namespace std;

class Plan : public User {
private:
    int numberOfMeals;
    int carbs;
    int proteins;
    int fats;
    std::vector<std::string> meals;

public:
    // Constructor
    Plan(const std::string& name, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split, int numberOfMeals);

    // Methods
    void setMeals();
    int findCarbs();
    int findProteins();
    int findFats();
    void seePortions();
    void equalSplit();
    void showPlan();
};