//
// Created by flapo on 2/19/2020.
//

#ifndef UNTITLED7_DIE_H
#define UNTITLED7_DIE_H

#include <string>
using namespace std;
class die{
private:
    int NumberOfSides;
    int Increment;
    int value;
    string color;
    bool isSymbol;
    string material;
    int startingValue;
public:
    die(int startingNumberOfSides, int startingIncrement, int StartingStartValue, string color="White",
            bool isSymbols=false, string material = "bone")
    int roll();
    void getNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setIncrement(int newIncrement);
    int getIncrement();
    void setStartingValue()(int newStartingValue);
    int getStartingValue();
    void setColor(bool newIsSymbol);
    bool IsSymbol();
    void setMaterial(string newMaterial);
    string getMaterial();




};
#endif //UNTITLED7_DIE_H
