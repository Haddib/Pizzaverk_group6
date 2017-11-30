#include "SalespersonUI.h"
#include <iostream>

using namespace std;

SalespersonUI::SalespersonUI()
{
    //ctor
}

SalespersonUI::~SalespersonUI()
{
    //dtor
}

void SalespersonUI::startSalespersonUI(){

    char salespersonInput;

    cout << "Logged in as: Salesperson" << endl;
    cout << "What do you want to do?: " << endl;
    cout << "1: option 1" << endl;
    cout << "2: option 2" << endl;
    cout << "3: option 3" << endl;
    cout << "q: change user" << endl;

    cin >> salespersonInput;

    if (salespersonInput == '1'){

    }
    if (salespersonInput == '2'){

    }
    if (salespersonInput == '3'){

    }
    if (salespersonInput == 'q'){

    }


}
