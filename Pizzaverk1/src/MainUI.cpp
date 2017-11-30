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
        cout << "s: salesperson" << endl;
        cout << "b: baker" << endl;
        cout << "q: quit" << endl;

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
        if (input == 'q'){

        }
    }
}
