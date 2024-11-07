#include <iostream>
using namespace std;
class User {
private:
    std::string name;
    double weight;
    double height;
    double calories;
    std::string state; // "maintenance", "bulk", "deficit"
    std::array<double, 3> split; // Percentage split for carbs, proteins, fats

public:
    // Constructor
    User(const std::string& name, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split);

    // Methods
    void findMaintenance();
    void findDeficit();
    void findBulk();
};