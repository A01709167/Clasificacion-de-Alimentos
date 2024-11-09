#include "Plan.h"
#include "user.cpp"
#include "user.h"

Plan::~Plan() = default;

void Plan::setMeals(int meals, double calories) {
    // Sets the number of meals per day, example 5
}

std::array<std::string, 10> Plan::showPlan(const std::array<std::string, 10>& plan) {
    // Implementation goes here
    return plan; // returns plan
}

int Plan::setProteins(int proteins, double calories) {
    // Changes the ammount of proteins
}
int Plan::setFats(int fats, double calories) {
    // Changes the ammount of proteins
}
int Plan::setCarbs(int carbs, double calories) {
    // Changes the ammount of proteins
}