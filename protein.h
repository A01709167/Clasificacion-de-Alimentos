#ifndef PROTEIN_H
#define PROTEIN_H

#include <string>
#include <vector>
#include "food.h"

class Protein: public Food {
private:
    std::string base;
    std::string proteinType;

public:
    bool isEnough(double protein);
    bool isLean(double fats, double protein);
    std::vector<std::string> show(const std::string &proteinType);
    std::vector<std::string> show(const std::string& proteinType);
};

#endif // PROTEIN_H