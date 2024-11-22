#include "Protein.h"

//SETTERS AND GETTERS
Protein::Protein(): Food(), name("PROTEIN"), calories(45), carbs(69), proteins(69), fats(69), base("ANIMAL/PLANT"), type("Type"), enough(false) {}

void Protein::setBase(string _base){
    base = _base;
}

void Protein::setType(string _type){
    type = _type;
}

void Protein::setLean(bool _lean){
    _lean = lean;
}

void Protein::setEnough(bool _enough){
    _enough = enough;
}

string Protein::getBase()
{
    return base;
}

string Protein::getType()
{
    return type;
}

bool Protein::getLean()
{
    return lean;
}

bool Protein::getEnough()
{
    return enough;
}

Protein::Protein(string _name, double _calories, double _carbs, double _proteins, double _fats)
: Food(_name, _calories, _carbs, _proteins, _fats){
}

// METHODS
bool Protein::isEnough()
{ //Says if the food has enough protein to mantain health which is between 10 and 35 per 100 g
    double protein = getProteins();
    enough = false;
    if (protein >= 10){
        enough = true;
    };
   
    return enough; //
}

bool Protein::isLean() {
    //Says if the food has enough protein to mantain health
    lean= false;
    if (getProteins()<=getFats()){
        lean = true;
    }
    return lean; // 
}

string Protein::show() {
    // Shows the nutritional values of said protein
    std::string message = getName() + " has:\n " + " " + to_string(getCalories())+" calories \n"+ " " +to_string(getProteins()) + " proteins\n" + " " +to_string(getFats()) + " fats\n" + " " +to_string(getLean()) +" lean" +" and "+to_string(isEnough())+" enough.";
    return message;
    return {}; // Placeholder return
}