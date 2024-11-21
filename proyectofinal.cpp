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
    //USER

    //User Anna(Gender, Age, Weight, Height)
    User Anna("Female", 23, 60, 170);
    std::string annamessage = "User is working. Calories is "+ std::to_string(Anna.findMaintenance())+" Bulk: " +std::to_string(Anna.findBulkCals()) +" Deficit" + std::to_string(Anna.findDeficitCals());
    std::cout <<"please please please"<<std::endl;
    Anna.askGoal(); 
    double calories =Anna.getCalories();
    std::cout <<std::to_string(calories)<< std::endl;
    
    return 0;
};
