// User.cpp
#include "User.h"

void User::setName(const std::string& name) {
    this->name = name;
}

void User::findMaintenance(double calories, double weight, double height) {
    // Implementation goes here
}

double User::findBulkCals(double calories) {
    // Implementation goes here
    return bulkCals; // Placeholder return
}

double User::findDeficitCals(double calories) {
    return deficitCals; // La suma de las calorías normales más lo que quiere subir
}
