#include <iostream>

#include "user.cpp"
#include "plan.cpp"
#include "meal.cpp"
#include "food.cpp"
#include "carbohydrate.cpp"
#include "protein.cpp"
#include "fats.cpp"

using namespace std;

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
    */

    //meal works
    //Meal someMeal(20,30,50);
    //std::cout<<someMeal.displayMeal()<<std::endl;

    Plan examplePlan(5000, {30, 50, 20}, 5);
    
    examplePlan.setMacros(5000);
    examplePlan.setSplit({30.0, 50.0, 20.0});
    std::cout << examplePlan.showMacros() << std::endl;
    examplePlan.setMeals(); 
    examplePlan.setMealsNames(0, "breakfast");
    
 
    Carbohydrate oreo("oreo", 170, 25, 1, 7, 14, 0.5);
    examplePlan.insertMealCarb(2, 2, oreo);
    examplePlan.insertMealCarb(0, 2, oreo);
    examplePlan.insertMealCarb(1, 2, oreo);
    std::cout<<examplePlan.showPlan()<<std::endl;
    examplePlan.showPlanMeals();

    
    return 0;
};
