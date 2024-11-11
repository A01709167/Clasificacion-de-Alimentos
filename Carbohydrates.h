//Carbohydrates is the first of the three macronutrients. Almost a 50% of our diet must come from carbohydrates, unless  you choose another diet like Keto where carbs won't be considered.
#ifndef CARBOHYDRATES_H
#define CARBOHYDRATES_H

#include <string>
#include <vector>
#include "food.h"

class Carbohydrates : public Food{
private:
    double sugar;
    std::string type;
    double fiber;

public:
    bool isHealthy(double sugar, double fiber);
    std::vector<std::string> show(const std::string& options);
};

#endif // CARBOHYDRATES_H
