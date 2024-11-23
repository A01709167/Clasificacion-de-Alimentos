#include <iostream>

#include "user.cpp"
#include "plan.cpp"
#include "meal.cpp"
#include "food.cpp"
#include "carbohydrate.cpp"
#include "protein.cpp"
#include "fats.cpp"
#include "plan.h"
using namespace std;
Plan createAndSetPlan(User& mainUser) { 
    std::cout << "-----------\n"; // User has only one plan, it could change to a vector with several plans but no. 
int numberOfMeals; 
std::cout << "Enter the number of meals: "; 
std::cin >> numberOfMeals; 
mainUser.askGoal(); double carbs, proteins, fats; 
std::cout << "Enter the percentage of Carbohydrates: "; 
std::cin >> carbs; 
std::cout << "Enter the percentage of Proteins: "; 
std::cin >> proteins; 
std::cout << "Enter the percentage of Fats: "; 
std::cin >> fats; 
std::array<double, 3> split = {carbs, proteins, fats}; 
mainUser.setPlan(numberOfMeals); 
std::cout << "Plan set successfully to " << mainUser.getGoal() << " with " << mainUser.getCalories() << " calories.\n"; 
Plan mainPlan = mainUser.getPlan(); 
mainPlan.setSplit(split);
mainPlan.setMacros(mainUser.getCalories()); 
mainPlan.setMeals(); 
std::cout<<"New plan with "<<numberOfMeals<<" meals and "<<mainUser.getCalories()<<" calories"<<std::endl;
return mainPlan;
}

Food createFood() {
    std::string name;
    double calories, carbs, proteins, fats;

    std::cout << "Enter food name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, name);

    std::cout << "Enter calories [g]: ";
    std::cin >> calories;

    std::cout << "Enter carbs: [g]";
    std::cin >> carbs;

    std::cout << "Enter fats: [g]";
    std::cin >> proteins;

    std::cout << "Enter proteins: [g]";
    std::cin >> fats;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    Food _food(name, calories, carbs, proteins, fats);
    _food.defineGroup();
    std::cout<<"A portion is "<<_food.portion()<<std::endl;
    string group = _food.getGroup();
    std::cout<<"Your food belongs to the "<<group<<" group.\n"<<std::endl;
    return _food;
}

Carbohydrate createCarb(Food _food){
    _food.portion();
    string group = _food.getGroup();
    string name = _food.getName();
    double calories = _food.getCalories();
    double carbs = _food.getCarbs();
    double fats = _food.getFats();
    double proteins = _food.getProteins();
    double sugar, fiber;
    
        std::cout<<"Initializing carb\n"<<std::endl;
        std::cout << "Enter sugar: "; 
        std::cin >> sugar; 
        std::cout << "Enter fiber: "; 
        std::cin >> fiber;
        Carbohydrate _carbohydrate( name,  calories, carbs, proteins, fats, sugar, fiber);
        return _carbohydrate;
}
Protein createProtein(Food _food){
    _food.portion();
    string group = _food.getGroup();
    string name = _food.getName();
    double calories = _food.getCalories();
    double carbs = _food.getCarbs();
    double fats = _food.getFats();
    double proteins = _food.getProteins();
    double sugar, fiber;
        Protein _protein(name, calories, carbs, proteins, fats);
        return _protein;
}
Fats createFats(Food _food){
    _food.portion();
    string group = _food.getGroup();
    string name = _food.getName();
    double calories = _food.getCalories();
    double carbs = _food.getCarbs();
    double fats = _food.getFats();
    double proteins = _food.getProteins();
    double sugar, fiber;
    double saturatedFat;
    std::cout<<"Initializing fat\n"<<std::endl;
    std::cout << "Enter saturatedFat: "; 
    std::cin >> saturatedFat;
    Fats _fat( name,  calories, carbs, proteins, fats, saturatedFat);
    return _fat;
}

int addFood(Plan& mainPlan){
    Food _food= createFood();
    string group = _food.getGroup();
    int mealI, foodI;
    
    if (group == "Carb"){
        Carbohydrate carb = createCarb(_food);
        carb.defPortion();
        std::cout<<"Now INSERT your CARB into your plan (Display your plan to see your meals)\n"<<std::endl;
        std::cout << "Enter Meal index: "; 
        int mealI =mealI-1;
        std::cin >> mealI; 
        std::cout << "Enter Carb index: "; 
        std::cin >> foodI; 
        mainPlan.insertMealCarb(mealI, foodI, carb);
        
    }
    else if (group =="Protein"){
        Protein protein = createProtein(_food);
        protein.setProteinPortion();
        std::cout<<"Now INSERT your PROTEIN into your plan (Display your plan to see your meals)\n"<<std::endl;
        std::cout << "Enter Meal index: "; 
        std::cin >> mealI; 
        std::cout << "Enter Protein index: "; 
        std::cin >> foodI; 
        mainPlan.insertMealProteins(mealI, foodI, protein);
    }
    else if (group =="Fat"){
        Fats fat = createFats(_food);
        fat.setFatPortion();
        std::cout<<"Now INSERT your FAT into your plan (Display your plan to see your meals)\n"<<std::endl;
        std::cout << "Enter Meal index: "; 
        std::cin >> mealI; 
        std::cout << "Enter Fat index: "; 
        std::cin >> foodI; 
        mainPlan.insertMealFat(mealI, foodI, fat);
    };
    return 0;
}
User createUser() {
    std::string _genre;
    string genre;
    int age;
    double weight, height;
    int opcion;
    string name;

    std::cout << "Enter genre: Male [m] | Female [f]  >>";
    std::getline(std::cin, _genre);
    if(_genre=="f"){
        genre = "Female";
    }
    else if (_genre=="m"){
        genre="Male";
    };
    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter weight (kg): ";
    std::cin >> weight;

    std::cout << "Enter height (cm): ";
    std::cin >> height;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    User mainUser(genre, age, weight, height);

    mainUser.setName(name);
    std::cout<<"User "<<name<<" created"<<std::endl;
    return mainUser;
}

Plan createPlan(User mainUser){
    mainUser.askGoal();
    int numberOfMeals;
    std::cout << "Enter number of meals (e.g 5): ";
    std::cin >> numberOfMeals;
    Plan mainPlan = mainUser.setPlan(numberOfMeals);
    return mainPlan;   
}

void displayMenu() { 
std::cout << "\n____________________\nMenu:\n"; 
std::cout << "1. Show Plan portions\n"; 
std::cout << "2. Show Plan Meals\n"; 
std::cout << "3. New Food\n"; 
std::cout << "4. Show Plan Macros\n"; 
std::cout << "5. Set Meals Name\n"; 
std::cout << "6. Change goal\n"; 
std::cout << "7. Change name\n"; 
std::cout << "8. Change weight\n"; 
std::cout << "9. Change split\n";
std::cout << "10. New Plan\n"; 
std::cout << "0. Exit\n"; 
std::cout << "Enter your choice: "; 
}

void setSplitInteractive(Plan& mainPlan) { 
    double carbs, proteins, fats; 
    std::cout << "\n----------\nSET PERCENTAGE OF EACH MACRO [e.g 60, 30, 10]\nEnter the percentage of Carbohydrates: "; 
    std::cin >> carbs; std::cout << "Enter the percentage of Proteins: "; 
    std::cin >> proteins; std::cout << "Enter the percentage of Fats: "; 
    std::cin >> fats; // Set the split array 
    mainPlan.setSplit({carbs, proteins, fats}); 
    }

void handleOption(int option, User& mainUser, Plan& mainPlan) {
    switch (option) {
        case 1:
            std::cout << mainPlan.showPlan() << std::endl;
            break;
        case 2:
            mainPlan.showPlanMeals();
            break;
        case 3:
        std::cout<<"\nInsert a food into your plan"<<std::endl;
            addFood(mainPlan);
            break;
        case 4:
            std::cout << mainPlan.showMacros() << std::endl;
            break;
        case 5:{
            std::string mealName; int opcion; 
            std::cout << "Enter meal index (e.g 1): "; 
            std::cin >> opcion; 
            std::cout << "Enter meal name (e.g Breakfast): "; 
            std::cin >> mealName; 
            mainPlan.setMealsNames(opcion, mealName);
            std::cout << "Display plan to see changes\n\n";
            break;
        }
        case 6:
            mainUser.askGoal();
            break;
        case 7: { 
            std::string name; std::cout << "Enter new name: "; 
            std::cin.ignore(); std::getline(std::cin, name); 
            mainUser.setName(name); break; 
        } 
        case 8: { 
            double weight; 
            std::cout << "Enter new weight: "; 
            std::cin >> weight; mainUser.setWeight(weight); 
            break; } 
        case 9: 
        setSplitInteractive(mainPlan); 
        break;
        case 10: {
            mainPlan = createAndSetPlan(mainUser);
        }
        break;
        case 0:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid option. Please try again.\n";
            break;
    }
}

int main(){
    User mainUser = createUser(); 
    int numberOfMeals; std::cout << "Enter the number of meals: "; 
    std::cin >> numberOfMeals; 
    mainUser.setPlan(numberOfMeals); 
    Plan mainPlan = mainUser.getPlan();
    double carbs, proteins, fats;
    std::cout << "Enter the percentage of Carbohydrates: "; 
    std::cin >> carbs; 
    std::cout << "Enter the percentage of Proteins: "; 
    std::cin >> proteins; std::cout << "Enter the percentage of Fats: "; 
    std::cin >> fats; // Set the split array mainPlan.setSplit({carbs, proteins, fats}); 
    array <double, 3> split = {carbs, proteins, fats};
    mainPlan.setSplit(split);

    mainPlan.setMacros(mainUser.getCalories());
    mainPlan.setMeals();

//From now on, proceed from the menu, everything before this has to be done in this order.
    
    int option; 
    do { 
        displayMenu(); 
        std::cin >> option; 
        handleOption(option, mainUser, mainPlan); 
    } 
    while (option != 0); 
    
    
    return 0;
};
