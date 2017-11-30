#include "PizzaType.h"
#include <iostream>
#include <fstream>
#include <limits>

using namespace std;
PizzaType::PizzaType()
{
    PizzaSize = 0;
    SizePrice = 0;
}

PizzaType::~PizzaType()
{
    //dtor
}

void PizzaType::setPizzaType(char sizeInput){
    ifstream fin;
    fin.open("PizzaTypeSettings.txt");

    if(sizeInput == 's' || sizeInput == 'S'){
        PizzaSize = findLineInTxt(fin, 0);
        SizePrice = findLineInTxt(fin, 1);
    }
    if(sizeInput == 'm' || sizeInput == 'M'){
        PizzaSize = findLineInTxt(fin, 2);
        SizePrice = findLineInTxt(fin, 3);
    }
    if(sizeInput == 'l' || sizeInput == 'L'){
        PizzaSize = findLineInTxt(fin, 4);
        SizePrice = findLineInTxt(fin, 5);
    }
    if(sizeInput == 'p' || sizeInput == 'P'){
        PizzaSize = findLineInTxt(fin, 6);
        SizePrice = findLineInTxt(fin, 7);
    }
    fin.close();
}

int PizzaType::findLineInTxt(ifstream& file, int line){
    file.seekg(ios::beg);
    for(int i=0; i < line - 1; ++i){
        file.ignore(numeric_limits<std::streamsize>::max(),'\n');
    }
    int N;
    file >> N;
    return N;
}
