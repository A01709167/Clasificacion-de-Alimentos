// Fats are the third macronutrient. FOODS can be FATS if the percentage of fats in their nutritional composition is larger than the other two macronutrients.
#ifndef FATS_H
#define FATS_H
#include "food.h"

#include <string>
#include <vector>
using namespace std;

class Fats : public Food {
private:
    string name;
    double calories;
    double carbs;
    double proteins;
    double fats;
    std::string type;//saturated or insaturated
    double saturatedFat;
    double saturated;

public:
    //Constructor
    Fats();
    Fats(string _name, double _calories, double _carbs, double _proteins, double _fats, double _saturatedFat);

    //GETTERS
    string getType();
    double getSaturatedFat();
    bool getSaturated();
    //SETTERS
    void setType(string _type);
    void setSaturatedFat(double _saturatedFat);
    void setFatPortion();
    //METHODS
    bool isSaturated();
    string show();
    std::string whatType();
};

#endif // FATS_H;