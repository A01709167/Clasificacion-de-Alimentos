#include "carbohydrate.h"
using namespace std;
Carbohydrate::Carbohydrate(string _name, double _calories, double _carbs, double _proteins, double _fats, double _sugar, double _fiber)
    : Food(_name, _calories, _carbs, _proteins, _fats) {
    sugar = _sugar;
    fiber = _fiber;
}

//Getters
double Carbohydrate::getSugar(){
    return sugar;
};
double Carbohydrate::getFiber(){
    return fiber;
};
string Carbohydrate::getType(){
    return type;
}

//Setter
void Carbohydrate::setType(string _type){
    type = _type;
};

//Methods
bool Carbohydrate::isHealthy() {
    sugar = getSugar();
    fiber = getFiber();
    bool healthy= true;
    if (sugar>fiber){
        healthy = false;
    }
    else if (sugar<fiber){
        healthy = true;
    }

    return healthy; // If it has too much sugar it says false
}

std::vector<std::string> Carbohydrate::show(const std::string& options) {
    // Displays a list of all the foods that the user has entered which are carbs
    return {}; // Returns a vector of all the possible options for carbohydrates
}