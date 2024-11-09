// Fats
#ifndef FATS_H
#define FATS_H

#include <string>
#include <vector>

class Fats {
private:
    std::string type;
    double saturatedFat;

public:
    bool isSaturated(double saturatedFat);
    std::vector<std::string> show(const std::string& fat);
    std::string group(double proteins, double fats);
};

#endif // FATS_H