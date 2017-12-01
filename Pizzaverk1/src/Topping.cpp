#include "Topping.h"

Topping::Topping()
{
    name = " ";
    category = '\0';
    price = 0;
}

Topping::~Topping()
{
    //dtor
}

void Topping::readToppingsFromFile(){
    ifstream fin;
    fin.open("ListOfToppings.txt");


    fin.close();
}


}

/*istream& operator >> (istream& in, Topping topping){
    cout << "Name of topping     : ";
    in >> topping.name;
    cout << "Category of topping : ";
    in >> topping.category;
    cout << "price of topping    : ";
    in >> topping.price;

    return in;
}
*/
string Topping::findLineInTxt(ifstream& file, int line){
    file.seekg(ios::beg);
    for(int i=0; i < line - 1; ++i){
        file.ignore(numeric_limits<std::streamsize>::max(),'\n');
    }
    string toppingstr;
    file >> toppingstr;
    return toppingstr;
}
