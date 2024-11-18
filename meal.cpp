#include "meal.h"
#include "user.h"
#include "plan.h"

void Meal::setName(string _mealName){
    mealName = _mealName;
}

Meal::Meal(string _planName, string _mealName, string _time)
{
    planName = _planName;
    mealName = _mealName;
    time = _time;
}

void Meal::setTime(string _time)
{
    time = _time;
    // Sólo dice la hora en la que se comerá (mañana, tarde)
}

void Meal::setEqualMeal(std::array<int, 3> _equalMeal) {
    equalMeal= _equalMeal;
}

void Meal::editCarbs(int carbs) {
    // Allows you to add or take carbs from the specific meal object
}
void Meal::editProteins(int proteins) {
    // idem
}
void Meal::editFats(int fats) {
    
}