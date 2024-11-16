//Carbohydrates is the first of the three macronutrients. Almost a 50% of our diet must come from carbohydrates, unless  you choose another diet like Keto where carbs won't be considered.
#ifndef CARBOHYDRATE_H
#define CARBOHYDRATE_H

#include <string>
#include <vector>
#include "food.h"

class Carbohydrate : public Food{
private:
    double sugar;
    std::string type;
    double fiber;

public:
    void setSugar(double sugar);
    void setFiber(double fiber);
    double getSugar();
    double getFiber();
    
    Carbohydrate(double sugar, double fiber);
    bool isHealthy(double sugar, double fiber);
    std::vector<std::string> show(const std::string& options);
};

#endif // CARBOHYDRATE_H
