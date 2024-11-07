// Parent class representing the user
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

// Child class representing the maintenance state
class Maintenance : public User {
public:
    // Constructor
    Maintenance(const std::string& name, double weight, double height, double calories, const std::array<double, 3>& split);
};

// Child class representing the deficit state
class Deficit : public User {
public:
    // Constructor
    Deficit(const std::string& name, double weight, double height, double caloriesUnder, const std::array<double, 3>& split);
};

// Child class representing the bulk state
class Bulk : public User {
public:
    // Constructor
    Bulk(const std::string& name, double weight, double height, double caloriesOver, const std::array<double, 3>& split);
};

// Class representing the meal plan
class Plan : public User {
private:
    int numberOfMeals;
    int carbs;
    int proteins;
    int fats;
    std::vector<std::string> meals;

public:
    // Constructor
    Plan(const std::string& name, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split, int numberOfMeals);

    // Methods
    void setMeals();
    int carbs();
    int proteins();
    int fats();
    void seePortions();
    void equalSplit();
    void showPlan();
};

// Class representing an individual meal
class Meal : public Plan {
private:
    std::string name;
    std::string time;
    int carbs;
    int proteins;
    int fats;

public:
    // Constructor
    Meal(const std::string& planName, double weight, double height, double calories, const std::string& state, const std::array<double, 3>& split, int numberOfMeals, const std::string& mealName, const std::string& time);

    // Methods
    void equalMeal();
    void editCarbs();
    void editProteins();
    void editFats();
    void seeMeal();
};
