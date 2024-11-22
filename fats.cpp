#include "fats.h"
//Constructor
Fats::Fats(): Food(), name("FAT"), calories(45), carbs(0), proteins(0), fats(0),  saturatedFat(0) {}
Fats::Fats(string _name, double _calories, double _carbs, double _proteins, double _fats, double _saturatedFat):Food(_name, _calories, _carbs, _proteins, _fats){
        saturatedFat = _saturatedFat;
        }

//Getters and setters

double Fats::getSaturatedFat()
{
    return saturatedFat;
}

bool Fats::getSaturated()
{
    return saturated;
}

void Fats::setType(string _type)
{
    type = _type;
}
void Fats::setSaturatedFat(double _saturatedFat){
    saturatedFat = _saturatedFat;
}

//METHODS
bool Fats::isSaturated()
{
    // Measures if the ammount of saturated fats is appropriate
    double fat = getFats();
    double saturatedFat = getSaturatedFat();
    bool saturated= false;
    if(saturatedFat>=fat*0.5){
        saturated = true;
    }
    return saturated; //
}

std::string Fats::whatType(){
    saturated = isSaturated();
    if (saturated == true){
        setType("Saturated");
    }
    else if (saturated==false){
        setType("Insaturated");
    };
    type = getType();
    return type;
}

string Fats::show(){
    string message = "undefined fat";
    return message; // 
}

string Fats::getType()
{
    return type;
}
