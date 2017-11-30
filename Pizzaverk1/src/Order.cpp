#include "Order.h"
#include <iostream>
#include <fstream>
#include <limits>

using namespace std;
Order::Order()
{
    ifstream fin;
    fin.open("PizzaTypeSettings.txt");

    cout << "what size?" << endl;
    cout << "s: " << findLineInTxt(fin, 1) << "\" - " << findLineInTxt(fin, 2) << "kr." << endl;
    cout << "m: " << findLineInTxt(fin, 3) << "\" - " << findLineInTxt(fin, 4) << "kr." << endl;
    cout << "l: " << findLineInTxt(fin, 5) << "\" - " << findLineInTxt(fin, 6) << "kr." << endl;
    cout << "s: " << findLineInTxt(fin, 7) << "\" - " << findLineInTxt(fin, 8) << "kr." << endl;
    cin >> S;
    pizza.makePizza(S);
    fin.close();
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
