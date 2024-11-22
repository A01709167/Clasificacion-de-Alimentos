#include "food.h"
#include <string>
using namespace std;

#include <iomanip> // Formatting
#include <sstream> // For formatting
#include <iostream>
#include "food.h"

//Setters and getters
void Food::setGroup(string _group){
    group = _group;
}
void Food::setPortionSize(double _portion){
    portionSize = _portion;
}

string Food::getName(){
    return name;
};

double Food::getCalories(){
    return calories;
}; 
double Food::getCarbs(){
    return carbs;
}; 
double Food::getProteins(){
    return proteins;
};
double Food::getFats(){
    return fats;
};
double Food::getPortionSize(){
    return portionSize;
};
string Food::getGroup(){
    return group;
}

void Food::setName(string _name)
{
    name = _name;
}

//Methods
double Food::portion()
{
    string group = getGroup();
    calories = getCalories(); //the calories of 100 g of food
    double _portion = 0.0;
    if (group == "Carb"){
        _portion = 7700/calories;
    }
    else if (group =="Protein"){
        _portion = 7000/calories;
    }
    else if (group =="Fat"){
        _portion = 4500/calories;
    };
    setPortionSize(_portion);
    // Dependiendo del grupo, calcula los gramos//
    return _portion; // Placeholder return
}

std::string Food::showFood(){
    std::string message = getName() + " has:\n " + " " + to_string(getCalories())+" calories \n"+ " " +to_string(getProteins()) + " proteins\n" + " " +to_string(getCarbs()) + " carbs\n" + " " +to_string(getFats()) +" fats";
    return message; //Regresa la lista de la información nutricional ingresada del alimento
}

int Food::defineGroup() {
    carbs = getCarbs();
    fats = getFats();
    proteins = getProteins();

    double values[3]={carbs, fats, proteins};
    string groups[3]={"Carb", "Protein", "Fat"};

    string fgroup = "blablabla";
    double largest = values[0];

    for (int i = 0; i <= 3; ++i) {
        if (values[i] >= largest) {
            largest = values[i];
            fgroup=groups[i];
        };
    };
    Food::setGroup(fgroup);
    return 0;
}