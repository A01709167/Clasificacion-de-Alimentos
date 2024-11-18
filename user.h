#include <iostream>
#include <array>
using namespace std;

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
    array<double, 3> split; // Percentage split for carbs, proteins, fats
    double increment;

public:
    // Constructor
    User();
    User(string _genre, int _age, double _weight, double _height); //I built this constructor to verify FINDCALORIES method
    //SETTERS 
    void setName(string _name);
    void setGenre(string _genre);
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
    array<double, 3> getSplit(array <double,3>);

    //METHODS
    void askGoal();
    double findMaintenance();
    double findBulkCals();
    double findDeficitCals();
};