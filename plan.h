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
    void setMeals(int meals);
    int setCarbs(int carbs);
    int setProteins(int proteins);
    int setFats(int fats);
    void seePortions(int portions);
    void equalSplit(int numberOfMeals, int carbs, int proteins, int fats);
    std::array<std::string, 10> showPlan(const std::array<std::string, 10>& plan);
};
