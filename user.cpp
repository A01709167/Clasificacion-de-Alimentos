// User.cpp
#include "plan.h"
#include "user.h"
#include <cmath>


User::User(string _genre, int _age, double _weight, double _height){
    genre = _genre;
    age = _age;
    weight = _weight;
    height = _height;
    goal = "Maintain weight";    
    calories = 5000;
}
void User::setName(string _name){
    name = _name;
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

//Methods
Plan User::setPlan(int numberOfMeals){ //Falta definir the user plan
    goal = getGoal(); //defino según la meta
    double calories = getCalories();
    std::array<double, 3> split = getSplit();
    
    Plan _userPlan(calories, split, numberOfMeals);
    userPlan = _userPlan;
    string message = "Plan set succesfully to "+goal+" with "+to_string(calories)+" calories .";
    return userPlan;
};

void User::askGoal(){
    int option;
    string _goal;
    double increment;
    string goals [3]={"Maintain weight", "Loose weight", "Gain Weight"};
    string extremes [3]={"Moderate", "High", "Extreme"};
    double increments [3]={10.0, 15.0, 25.0};
    std::cout<<"Set your goal, insert a number e.g 1"<<std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout<<(i+1)<<". "<< goals[i]<<endl;
    }
    std::cin>> (option);
    for (int i = 0; i < 4; ++i) {
        if (option==i){
            _goal =goals[i-1];
        };
    };
    setGoal(_goal);

    for (int i = 0; i < 3; ++i) {
        std::cout<<(i+1)<<". "<< extremes[i]<<endl;
    }
    std::cin>> option;
    for (int i = 0; i < 3; ++i) {
        if (option==i){
            increment =increments[i-1];
        };
    };
    setIncrement(increment);
    setGoal(_goal);
        std::cout<<"Goal set to "<< _goal<<std::endl;

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
    double _calories;
    goal = getGoal();
    if (goal =="Maintain weight"){
        _calories = findMaintenance();
    }
    else if (goal=="Gain Weight"){
        _calories = getBulk();
    }
    else if (goal =="Loose weight"){
        _calories = getDeficit();
    };
    setCalories(_calories);
    calories = _calories;
    //std::cout<<"Calories set according to goal  "<<goal<<" : "<<calories<<std::endl;//I may erase the checkpoint messages later
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
array<double, 3> User::getSplit()
{
    return split;
}
string User::getGenre()
{
    return genre;
}
int User::getAge(){
    return age;
}
Plan User::getPlan(){
    return userPlan;
}

//Methods 


double User::findMaintenance() {
    string genre = "Female";
    double weight =getWeight();
    double height =getHeight();//getHeight();
    int age = getAge();
    double _calories;
    // Finds the average calories the user most eat. I'm implementing the Mifflin-St Jeor Formula
    if (genre=="Male"){
        _calories = (weight*10) +(6.25*height)-(5*age)-161+500;
    }
    else if (genre=="Female"){
        _calories = (weight*10) +(6.25*height)-(5*age)+5+500;
    };
    calories = std::round(_calories);
    setCalories(calories);
    return calories;
}

double User::findBulkCals() {
    double weight =getWeight();
    double height =getHeight();
    int age = getAge();
    double _bulk;
    double increment;
    // Finds the average calories the user most eat. I'm implementing the Mifflin-St Jeor Formula
    if (genre=="Male"){
        calories = (weight*10) +(6.25*height)-(5*age)-161;
    }
    else if (genre=="Female"){
        calories = (weight*10) +(6.25*height)-(5*age)+5+200;
    };
    _bulk = calories + calories*0.20; //between 15 and 20% surplus is recommended, may this value get variable in the future
    bulk = std::round(_bulk);
    setCalories(bulk);
    return bulk; // Placeholder return
}

double User::findDeficitCals() {
    double weight =getWeight();
    double height =getHeight();
    int age = getAge();
    double _deficit;
    // Finds the average calories the user most eat. I'm implementing the Mifflin-St Jeor Formula
    if (genre=="Male"){
        calories = (weight*10) +(6.25*height)-(5*age)-161;
    }
    else if (genre=="Female"){
        calories = (weight*10) +(6.25*height)-(5*age)+5+200;
    };
    _deficit = calories - calories*0.20;
    deficit = std::round(_deficit);
    setCalories(deficit);
    return deficit; // La suma de las calorías normales más lo que quiere subir
}
