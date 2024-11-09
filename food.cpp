#include "Food.h"

Food ::~Food() = default;

std::string Food::group(double carbs, double proteins, double fats) {
    // Decide de qué grupo de alimento (carbs, prote o fats dependiendo del porcentaje)
    return "The group is {group}"; // Placeholder return
}

Food::Food(const std::string &name, double weight, double height, double calories, const std::string &state, const std::array<double, 3> &split)
{
}

double Food::portion(double calories, string group)
{
    // Dependiendo del grupo, calcula los gramos
    //
    return portionSize; // Placeholder return
}

std::string Food::showFood(const std::string& foodName) {
    //Bla bla bla
    return ""; //Regresa la lista de la información nutricional ingresada del alimento
}

