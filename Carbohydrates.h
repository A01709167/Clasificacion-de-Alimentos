#ifndef CARBOHYDRATES_H
#define CARBOHYDRATES_H

#include <string>
#include <vector>

class Carbohydrates {
private:
    double sugar;
    std::string type;
    double fiber;

public:
    bool isHealthy(double sugar, double fiber);
    std::vector<std::string> show(const std::string& options);
};

#endif // CARBOHYDRATES_H
