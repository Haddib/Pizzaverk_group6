#include "AdminUI.h"
#include <iostream>

using namespace std;

AdminUI::AdminUI()
{
    //ctor
}

AdminUI::~AdminUI()
{
    //dtor
}

void AdminUI::startAdminUI(){
    char adminInput;

    cout << "Logged in as: Admin" << endl;
    cout << "What do you want to do?: " << endl;
    cout << "1: option 1" << endl;
    cout << "2: option 2" << endl;
    cout << "3: option 3" << endl;
    cout << "q: change user" << endl;

    cin >> adminInput;

    if (adminInput == '1'){

    }
    if (adminInput == '2'){

    }
    if (adminInput == '3'){

    }
    if (adminInput == 'q'){

    }

}
