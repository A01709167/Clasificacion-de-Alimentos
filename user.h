#include <iostream>
#include <array>
#include "plan.h"
using namespace std;

#ifndef USER_H
#define USER_H
class User {
private:
    string name;
    string genre; //This is Male or Female
    int age;
    double weight;
    double height; //In cm
    double calories;
    double deficit;
    double bulk;
    string goal;
    array<double, 3> split; // Percentage split for carbs, proteins, fats (in that order)
    double increment;
    int numberOfMeals;
    Plan userPlan = setPlan(numberOfMeals);
    

public:
    // Constructor
    User(string _genre, int _age, double _weight, double _height); //I built this constructor to verify FINDCALORIES method
    //SETTERS 
    void setAge( int _age);
    void setWeight(double _weight);
    void setCalories(double _calories);
    void setDeficit(double _deficit);
    void setBulk(double _bulk);
    void setGoal(string _goal);
    void setIncrement(double _increment);
    void setSplit(array<double, 3> _split);

    //getters
    double getHeight();
    string getGenre();
    int getAge();
    double getWeight();
    double getCalories();
    double getDeficit();
    double getBulk();
    string getGoal();
    array<double, 3> getSplit();
    Plan getPlan();

    //METHODS
    void askGoal();
    double findMaintenance();
    double findBulkCals();
    double findDeficitCals();
    //A plan has (calories, split and number of meals), we initialize a plan only with the number of meals as the others come from the users info.
    Plan setPlan(int numberOfMeals); //porque un plan se inicializa con el number of meals, y los demás con getters

};

#endif