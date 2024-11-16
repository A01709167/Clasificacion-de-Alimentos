#include "carbohydrate.h"

Carbohydrate::Carbohydrate(double _sugar, double _fiber)
:Food(const std::string& name, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split){
    sugar=_sugar;
    fiber = _fiber;
}

bool Carbohydrate::isHealthy(double _sugar, double _fiber) {
    sugar = _sugar;
    fiber = _fiber;
    return false; // If it has too much sugar it says false
}

std::vector<std::string> Carbohydrate::show(const std::string& options) {
    // Displays a list of all the foods that the user has entered which are carbs
    return {}; // Returns a vector of all the possible options for carbohydrates
}