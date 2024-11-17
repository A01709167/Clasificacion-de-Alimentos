#include <iostream>
#include "carbohydrate.h"
#include "food.cpp"
using namespace std;

int main()
{
    cout << "Bienvenido al protrama de Alimentacion Balanceada"<<std::endl;
    Food apple("Manzanita", 55.00, 90.00, 3.00, 2.00);
    std::cout<< apple.showFood()<<endl;
    string applename = apple.getName();
    std::cout <<"I love to eat " <<applename<<" !!"<<std::endl;
    apple.defineGroup();
    std::string mGroup = apple.getGroup();
    std::cout<<applename<<" belongs to " <<mGroup<<" group"<<std::endl;
    return 0;
}