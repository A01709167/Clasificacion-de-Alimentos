#include "carbohydrate.h"
using namespace std;
Carbohydrate::Carbohydrate() : Food(), name("CARBOHYDRATE"), calories(77), carbs(100), proteins(0), fats(0), sugar(100), fiber(50)  {}
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

void Carbohydrate::setSugar(double _sugar){
    sugar = _sugar;
}
void Carbohydrate::setFiber(double _fiber){
    fiber = _fiber;
}

// Setter
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

string Carbohydrate::show()
{   string message = "undefined carb";
    return message;
}

