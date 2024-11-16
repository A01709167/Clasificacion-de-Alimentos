#include <iostream>
#include <array>
using namespace std;
#include <vector>

class User {
private:
    string name;
    double weight;
    double height;
    double calories;
    double deficitCals;
    double bulkCals;
    string goal;
    array<double, 3> split; // Percentage split for carbs, proteins, fats
    vector<int> plan;

public:
    // Constructor
    User(string _name, double _weight, double _height, double _calories, string _goal, const std::array<double, 3>& _split);

    // Methods
    void setName(const std::string& name);
    void setGoal(const std::string &goal);
    void setSplit(std::array<double, 3> split);

    void findMaintenance(double calories,  double weight, double height);
    double findBulkCals(double calories, string goal);
    double findDeficitCals(double calories, string goal);

    double getHeight(double height);
    double getWeight(double weight);
    void setWeight(double weight);
};