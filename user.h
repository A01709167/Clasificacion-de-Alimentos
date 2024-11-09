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
    std::array<double, 3> split; // Percentage split for carbs, proteins, fats
    std::vector<int> plan;

public:
    // Constructor
    User(const std::string& name, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split);

    // Methods
    void setName(const std::string& name);
    void setGoal(const std::string &goal);
    void setSplit(std::array<double, 3> split);

    void findMaintenance(double calories,  double weight, double height);
    double findBulkCals(double calories, string goal);
    double findDeficitCals(double calories, string goal);

    double getHeight(double height);
};