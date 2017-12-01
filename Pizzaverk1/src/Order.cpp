#include "Order.h"
#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

Order::Order(){
    char orderInput = '\0';
    pizzaSize = '\0';

    while(orderInput != 'q'){
        cout << endl << "Order" << endl;
        cout << endl << "1: Add a pizza" << endl;
        cout << "2: Add a drink" << endl;
        cout << "3: Confirm order" << endl;
        cout << "q: Quit" << endl;

        cin >> orderInput;

        if (orderInput == '1'){
            addPizza();
        }
        if (orderInput == '2'){

        }
        if (orderInput == '3'){

        }
    }
}

void Order::addPizza(){
    ifstream fin;
    fin.open("PizzaTypeSettings.txt");

    while(pizzaSize != 's' && pizzaSize != 'S' && pizzaSize != 'm' && pizzaSize != 'M' && pizzaSize != 'l' && pizzaSize != 'L' && pizzaSize != 'p' && pizzaSize != 'P'){
        cout << endl << "What size?" << endl;
        cout << "s: " << findLineInTxt(fin, 1) << "\" - " << findLineInTxt(fin, 2) << "kr." << endl;
        cout << "m: " << findLineInTxt(fin, 3) << "\" - " << findLineInTxt(fin, 4) << "kr." << endl;
        cout << "l: " << findLineInTxt(fin, 5) << "\" - " << findLineInTxt(fin, 6) << "kr." << endl;
        cout << "p: " << findLineInTxt(fin, 7) << "\" (PAN) - " << findLineInTxt(fin, 8) << "kr." << endl;
        cin >> pizzaSize;
    }

    cout << "How many toppings do you want?: ";
    cin >> numberOfToppings;

    pizza.makePizza(pizzaSize, numberOfToppings);

    for(int i = 0 ; i < numberOfToppings ; i++){

        Topping topping;
        cin >> topping;
        pizza.addTopping(topping);

    }
    fin.close();

    ofstream fout;
    fout.open("OrderInProgress.txt");

}

Order::~Order()
{
    //dtor
}

/*void Order::print(){
    cout << n;
}*/

int Order::findLineInTxt(ifstream& file, int line){
    file.seekg(ios::beg);
    for(int i=0; i < line - 1; ++i){
        file.ignore(numeric_limits<std::streamsize>::max(),'\n'); ///af stackoverflow
    }
    int N;
    file >> N;
    return N;
}
