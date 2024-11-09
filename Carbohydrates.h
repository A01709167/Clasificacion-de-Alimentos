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
