#include "Food.h"
#include <string>
using namespace std;

Food::Food(string _name, double _calories, double _carbs, double _proteins, double _fats, double _portionSize, string _group){
    name = _name;
    calories = _calories;
    proteins = _proteins;
    fats = _fats;
    portionSize = _portionSize;
    group = _group;
}
//Setters and getters
void Food::setGroup(string _group){
    group = _group;
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
};    


//Methods
double Food::portion()
{
    // Dependiendo del grupo, calcula los gramos//
    return portionSize; // Placeholder return
}

int Food::defineGroup() {
    float values[3];
    string names[3];
    float largest = values[0];
    string name;
    for (int i = 1; i < 3; ++i) {
        if (values[i] > largest) {
            largest = values[i];
            name = names[i];
        };
    };
    // Decide de qué grupo de alimento (carbs, prote o fats dependiendo del porcentaje)
    Food::setGroup(name);
    return 0;
}


std::string Food::showFood(){
    std::cout<<"message"<<endl;
    //Bla bla bla
    return "bakarayo"; //Regresa la lista de la información nutricional ingresada del alimento
}

