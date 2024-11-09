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
    std::vector<std::vector<int>>& equalMeal;
    std::vector<std::vector<int>>& mealMatrix;

public:
    // Constructor
    Meal(const std::string& planName, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split, int numberOfMeals, const std::string& mealName, const std::string& time);

    // Methods
    void setTime(std::string);
    std::vector<std::vector<int>>& setEqualMeal(const std::vector<std::vector<int>>& mealMatrix); //Divide las porciones equitativamente en la cantidad de comidas siendo la cena la última
    void editCarbs(int carbs);
    void editProteins(int proteins);
    void editFats(int fats);
    void showMeal();
};