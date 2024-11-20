#include <iostream>
#include "carbohydrate.cpp"
#include "food.cpp"
#include "fats.cpp"
#include "user.cpp"
#include "plan.cpp"
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
    std::cout<<mayonnaise.getName()<<" is "<<mayonnaise.whatType() <<std::endl;
    
//USER
    User Anna("Female", 23, 60, 170);
    std::cout<<"User is working. Calories is "<<Anna.findMaintenance()<<Anna.findBulkCals()<<Anna.findDeficitCals()<<endl;
    Anna.askGoal();


    return 0;
};
