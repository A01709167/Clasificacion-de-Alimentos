#ifndef PROTEIN_H
#define PROTEIN_H

#include <string>
#include <vector>

class Protein {
private:
    std::string base;

public:
    bool isEnough(double amount);
    std::vector<std::string> show(const std::string& proteinType);
};

#endif // PROTEIN_H