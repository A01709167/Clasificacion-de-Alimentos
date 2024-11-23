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

Food createFood() {
    std::string name;
    double calories, carbs, proteins, fats;

    std::cout << "Enter food name: ";
    std::getline(std::cin, name);

    std::cout << "Enter calories [g]: ";
    std::cin >> calories;

    std::cout << "Enter carbs: [g]";
    std::cin >> carbs;

    std::cout << "Enter proteins: [g]";
    std::cin >> proteins;

    std::cout << "Enter fats: [g]";
    std::cin >> fats;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    Food _food(name, calories, carbs, proteins, fats);
    _food.defineGroup();
    string group = _food.getGroup();
    std::cout<<"Your food belongs to the "<<group<<" group.\n"<<std::endl;
    return _food;
}

Carbohydrate createCarb(Food _food){
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
        createCarb(_food);
        std::cout<<"Now INSERT your CARB into your plan (Display your plan to see your meals)\n"<<std::endl;
        std::cout << "Enter Meal index: "; 
        std::cin >> mealI; 
        std::cout << "Enter Carb index: "; 
        std::cin >> foodI; 
        mainPlan.insertMealCarb(mealI, foodI);
        
    }
    else if (group =="Protein"){
        createProtein(_food);
        std::cout<<"Now INSERT your PROTEIN into your plan (Display your plan to see your meals)\n"<<std::endl;
        std::cout << "Enter Meal index: "; 
        std::cin >> mealI; 
        std::cout << "Enter Protein index: "; 
        std::cin >> foodI; 
        mainPlan.insertMealProteins(mealI, foodI);
    }
    else if (group =="Fat"){
        createFats(_food);
        std::cout<<"Now INSERT your FAT into your plan (Display your plan to see your meals)\n"<<std::endl;
        std::cout << "Enter Meal index: "; 
        std::cin >> mealI; 
        std::cout << "Enter Fat index: "; 
        std::cin >> foodI; 
        mainPlan.insertMealFat(mealI, foodI);
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

    std::cout << "Enter genre: Male [m] | Female [f]";
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
std::cout << "\nMenu:\n"; 
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
            mainPlan.showPlanMeals();;
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
            std::cout<<"-----------\n"; //User has only one plan, it could change to a vector with several plans but no.
            int numberOfMeals; std::cout << "Enter the number of meals: "; 
            std::cin >> numberOfMeals; 
            mainUser.askGoal(); 
            double carbs, proteins, fats;
            std::cout << "Enter the percentage of Carbohydrates: "; 
            std::cin >> carbs; 
            std::cout << "Enter the percentage of Proteins: "; 
            std::cin >> proteins; std::cout << "Enter the percentage of Fats: "; 
            std::cin >> fats; // Set the split array mainPlan.setSplit({carbs, proteins, fats}); 
            array <double, 3> split = {carbs, proteins, fats};
            mainUser.setPlan(numberOfMeals);
            std::cout<<"Plan set succesfully to "<<mainUser.getGoal()<<" with "<<mainUser.getCalories()<<" calories ."; 
            Plan mainPlan = mainUser.getPlan();
            mainPlan.setSplit(split);
            mainPlan.setMacros(mainUser.getCalories());
            mainPlan.setMeals();
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
    /*
    cout << "Bienvenido al protrama de Alimentacion Balanceada"<<std::endl;
    
    Food apple("Manzanita", 55.00, 90.00, 3.00, 2.00);
    //Show Food
    std::cout<< apple.showFood()<<endl;
    string applename = apple.getName();
    std::cout <<"I like to eat " <<applename<<" !!"<<std::endl;

    //Get group
    apple.defineGroup();
    std::string mGroup = apple.getGroup();
    std::cout<<applename<<" belongs to " <<mGroup<<" group"<<std::endl;

    //Portion
    apple.portion();
    std::cout<<"Portion size of "<<applename <<" is "<< apple.getPortionSize() <<std::endl;
//CARBOHYDRATE CLASS
    Carbohydrate oreo("oreo", 170, 25, 1, 7, 14, 0.5);
    std::cout<< oreo.getName() <<" is healthy? "<< oreo.isHealthy()<<endl;
    
//Fats class
    Fats mayonnaise("mayonnaise", 40.3, 34.3, 34.34, 56.6, 56.7);
    std::string message = mayonnaise.getName()+" is "+mayonnaise.whatType();
    std::cout<< message <<std::endl;
    
  
    //User Anna(Gender, Age, Weight, Height)
    std::cout << "Creating User object" << std::endl; 
    User Anna("Female", 23, 60, 170); 
    std::cout << "User object created" << std::endl; 
    std::string annamessage = "User is working. Calories is " + std::to_string(Anna.findMaintenance()) + " Bulk: " + std::to_string(Anna.findBulkCals()) + " Deficit: " + std::to_string(Anna.findDeficitCals()); 
    std::cout << annamessage << std::endl; std::cout << "please please please" << std::endl; 
    Anna.askGoal(); 
    double calories = Anna.getCalories(); 
    std::cout << "Calories: " << std::to_string(calories) << std::endl;
    //Now, having the calories we can create the plan
    //First we set the split
    Anna.setSplit({50.0,30.0,20.0});
    Anna.getSplit();
    Anna.setPlan(5); //includes the number of meals to eat
    //ANTES DE PLAN Antes de intentar esto, arreglar meal annaplan
    //Plan annaplan = Anna.getPlan();
    //.showPlan();
    

    //meal works
    //Meal someMeal(20,30,50);
    //std::cout<<someMeal.displayMeal()<<std::endl;

    Plan examplePlan(5000, {30, 50, 20}, 5);
    
    examplePlan.setMacros(5000);
    examplePlan.setSplit({30.0, 50.0, 20.0});
    std::cout << examplePlan.showMacros() << std::endl;
    examplePlan.setMeals(); 
    examplePlan.setMealsNames(0, "breakfast");
    
 
    Carbohydrate oreo("oreo", 353.75, 25, 1, 7, 14, 0.5);
    oreo.defPortion();
    examplePlan.insertMealCarb(2, 2, oreo);
    examplePlan.insertMealCarb(0, 2, oreo);
    examplePlan.insertMealCarb(1, 2, oreo);
    std::cout<<examplePlan.showPlan()<<std::endl;
    examplePlan.showPlanMeals();

    User mainUser = createUser();
    int numberOfMeals;
    std::cout << "Enter the number of meals: "; 
    std::cin >> numberOfMeals; 
    mainUser.setPlan(numberOfMeals); //It asks for the number of meals
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
    std::cout<<mainPlan.showMacros()<<std::endl;
    std::cout<<mainPlan.showPlan()<<std::endl;
    mainPlan.showPlanMeals();*/
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
