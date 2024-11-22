//Proteins are the final macronutrient and is one of the most important one. Protein inherits the attributes of FOOD, but it has its own sources and ammounts
#ifndef PROTEIN_H
#define PROTEIN_H

#include <string>
#include <vector>
#include "food.h"


class Protein: public Food {
private:
    string name;
    double calories;
    double carbs; 
    double proteins;
    double fats;
    std::string base;
    std::string type;
    bool lean;
    bool enough;

public:
    //CONSTRUCTOR
    Protein();
    Protein(string _name, double _calories, double _carbs, double _proteins, double _fats);

    bool isEnough();
    bool isLean();
    string show();

    void setBase(string);
    void setType(string);
    void setLean(bool);
    void setEnough(bool);

    string getBase();
    string getType();
    bool getLean();
    bool getEnough();
};

#endif // PROTEIN_H