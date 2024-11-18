#include "Protein.h"
#include <iomanip> // Formatting
#include <sstream> // For formatting

std::string formatDouble(double value) {
    std::ostringstream out;
    out << std::fixed << std::setprecision(2) << value;
    return out.str();
}

//SETTERS AND GETTERS

void Protein::setBase(string _base){
    base = _base;
}

void Protein::setType(string _type){
    type = _type;
}

void Protein::setLean(bool _lean){
    _lean = lean;
}

void Protein::setEnough(bool _enough){
    _enough = enough;
}

string Protein::getBase()
{
    return base;
}

string Protein::getType()
{
    return type;
}

bool Protein::getLean()
{
    return lean;
}

bool Protein::getEnough()
{
    return enough;
}

//METHODS
bool Protein::isEnough()
{ //Says if the food has enough protein to mantain health which is between 10 and 35 per 100 g
    double protein = getProteins();
    enough = false;
    if (protein >= 10){
        enough = true;
    };
   
    return enough; //
}

bool Protein::isLean() {
    //Says if the food has enough protein to mantain health
    lean= false;
    if (getProteins()<=getFats()){
        lean = true;
    }
    return lean; // 
}

string Protein::show(string proteinType) {
    // Shows the nutritional values of said protein
    std::string message = getName() + " has:\n " + " " + formatDouble(getCalories())+" calories \n"+ " " +formatDouble(getProteins()) + " proteins\n" + " " +formatDouble(getFats()) + " fats\n" + " " +formatDouble(getLean()) +" lean" +" and "+formatDouble(isEnough())+" enough.";
    return message;
    return {}; // Placeholder return
}