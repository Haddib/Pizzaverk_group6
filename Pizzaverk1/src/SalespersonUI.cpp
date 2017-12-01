#include "SalespersonUI.h"
#include "Pizza.h"
#include "Order.h"
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

    cout << endl << "Logged in as: Salesperson" << endl;
    cout << "What do you want to do?: " << endl;
    cout << endl << "1: make a new order" << endl;
    cout << "2: option 2" << endl;
    cout << "3: option 3" << endl;
    cout << "q: change user" << endl;

    cin >> salespersonInput;

    if (salespersonInput == '1'){
        Order order;

    }
    if (salespersonInput == '2'){

    }
    if (salespersonInput == '3'){

    }
    if (salespersonInput == 'q'){

    }


}
