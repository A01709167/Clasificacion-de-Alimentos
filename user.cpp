// User.cpp
#include "user.h"

/// @param _split 
User::User(){}

User::User(string _genre, int _age, double _weight, double _height)
{
    genre = _genre;
    age = _age;
    weight = _weight;
    height = _height;
}

void User::setName(string _name) {
    name = _name;
}
void User::setGenre(string _genre){
    genre=_genre;
}
void User::setAge(int _age){
    age = _age;
}
void User::setWeight(double _weight) {
    weight = _weight;
}
void User::setCalories(double _calories) {
    calories = _calories;
}
void User::setDeficit(double _deficit) {
    deficit = _deficit;
}
void User::setBulk(double _bulk) {
    bulk =_bulk;
}

void User::setGoal(string _goal) {
    goal =_goal;
};

void User::setIncrement(double _increment){
    increment=_increment;
}

void User::askGoal(){
    int option;
    string goal;
    double increment;
    string goals [3]={"Maintain weight", "Loose weight", "Gain Weight"};
    string extremes [3]={"Moderate", "High", "Extreme"};
    double increments [3]={10.0, 15.0, 25.0};
    for (int i = 0; i < 3; ++i) {
        std::cout<<(i+1)<<". "<< goals[i]<<endl;
    }
    std::cin>> (option);
    for (int i = 0; i < 3; ++i) {
        if (option==i){
            goal =goals[i];
        };
    };
    setGoal(goal);

    for (int i = 0; i < 3; ++i) {
        std::cout<<(i+1)<<". "<< extremes[i]<<endl;
    }
    std::cin>> option;
    for (int i = 0; i < 3; ++i) {
        if (option==i){
            increment =increments[i];
        };
    };
    setIncrement(increment);
    setGoal(goal);
        std::cout<<"Goal set to "<< goal<<std::endl;

};
void User::setSplit(std::array<double, 3> _split){
    split = _split;
    //Defines how the user wants to devide the macronutrients
}

double User::getHeight(){
    return height;
}

double User::getWeight()
{
    return weight;
}

double User::getCalories()
{
    return calories;
}

double User::getDeficit()
{
    return deficit;
}

double User::getBulk()
{
    return bulk;
}

string User::getGoal()
{
    return goal;
}
string User:: getGenre(){
    return genre;
}
int User::getAge(){
    return age;
}

//Methods 


double User::findMaintenance() {
    double weight =getWeight();
    double height =getHeight();
    int age = getAge();
    double calories;
    // Finds the average calories the user most eat. I'm implementing the Mifflin-St Jeor Formula
    if (genre=="Male"){
        calories = (weight*10) +(6.25*height)-(5*age)-161;
    }
    else if (genre=="Female"){
        calories = (weight*10) +(6.25*height)-(5*age)+5;
    };
    return calories;
}

double User::findBulkCals() {
    double weight =getWeight();
    double height =getHeight();
    int age = getAge();
    double bulk;
    double increment;
    // Finds the average calories the user most eat. I'm implementing the Mifflin-St Jeor Formula
    if (genre=="Male"){
        calories = (weight*10) +(6.25*height)-(5*age)-161;
    }
    else if (genre=="Female"){
        calories = (weight*10) +(6.25*height)-(5*age)+5+200;
    };
    bulk = calories + calories*0.20; //between 15 and 20% surplus is recommended, may this value get variable in the future
    std::cout<<"\nBULK calories FOUND succesfully:  "<<endl;
    return bulk; // Placeholder return
}

double User::findDeficitCals() {
    double weight =getWeight();
    double height =getHeight();
    int age = getAge();
    double bulk;
    // Finds the average calories the user most eat. I'm implementing the Mifflin-St Jeor Formula
    if (genre=="Male"){
        calories = (weight*10) +(6.25*height)-(5*age)-161;
    }
    else if (genre=="Female"){
        calories = (weight*10) +(6.25*height)-(5*age)+5+200;
    };
    deficit = calories - calories*0.20;
    std::cout<<"\nDEFICIT calories FOUND succesfully:  "<<endl;
    return deficit; // La suma de las calorías normales más lo que quiere subir
}
