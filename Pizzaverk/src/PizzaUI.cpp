#include "PizzaUI.h"
#include <iostream>
#include "Pizza.h"
#include "PizzaRepository.h"

using namespace std;

PizzaUI::PizzaUI()
{
    //ctor
}

void PizzaUI::startUI(){

    char selection = '\0';

    cout << "m: make pizza" << endl;
    cout << "r: read pizza" << endl;

    cin >> selection;

    if(selection == 'm'){
        int topCnt;

        cout << "How many toppings?: ";
        cin >> topCnt;

        Pizza pizza(topCnt);

        for(int i = 0 ; i < topCnt ; i++){

            Topping topping;
            cin >> topping;
            pizza.addTopping(topping);

        }

       // cout << pizza << endl;

        PizzaRepository repo;
        repo.storePizza(pizza);

        cout << endl;

    }

    if(selection == 'r'){
        PizzaRepository repo;
        Pizza pizza = repo.retrievePizza();
        cout << pizza << endl;
    }
}


