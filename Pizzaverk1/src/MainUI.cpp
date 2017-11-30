#include "MainUI.h"
#include "AdminUI.h"
#include "SalespersonUI.h"
#include <iostream>

using namespace std;

MainUI::MainUI()
{
    //ctor
}

MainUI::~MainUI()
{
    //dtor
}

void MainUI::startMainUI(){
    char input = '\0';

    while(input != 'q'){
        cout << "Who are you?" << endl;
        cout << "a: Administrator" << endl;
        cout << "s: Salesperson" << endl;
        cout << "b: Baker" << endl;
        cout << "q: Quit" << endl;

        cin >> input;

        if (input == 'a'){
            AdminUI adminui;
            adminui.startAdminUI();
        }
        if (input == 's'){
            SalespersonUI salespersonui;
            salespersonui.startSalespersonUI();

        }
        if (input == 'b'){

        }
    }
}
