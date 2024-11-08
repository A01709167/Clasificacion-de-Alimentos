#include <iostream>
#include <array>
using namespace std;
#include <vector>

class User {
private:
    std::string name;
    double weight;
    double height;
    double calories;
    double deficitCals;
    double bulkCals;
    std::string goal;
    std::string state; // "maintenance", "bulk", "deficit"
    std::array<double, 3> split; // Percentage split for carbs, proteins, fats
    std::vector<int> split;
    std::vector<int> plan;

public:
    // Constructor
    User(const std::string& name, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split);

    // Methods
    void setName(const std::string& name);
    std::string setGoal();
    void findMaintenance(double cals,  double weight, double height);
    double findBulkCals(double cals);
    double findDeficitCals(double cals);
    double getHeight(double height);
};