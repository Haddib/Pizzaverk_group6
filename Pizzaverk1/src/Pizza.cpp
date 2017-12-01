#include "Pizza.h"
#include <iostream>
#include "Topping.h"

using namespace std;

Pizza::Pizza()
{
    PizzaType();
    toppingCount = 0;
    toppings = 0;
    currentToppingNum = 0;
}

Pizza::~Pizza()
{
    if(toppings != 0){
        delete[] toppings;
        PizzaType();
        toppingCount = 0;
        toppings = 0;
        currentToppingNum = 0;
    }
}

void Pizza::makePizza(char pizzaSize, int numberOfToppings){
    pizzatype.setPizzaType(pizzaSize);              ///setur st�r� og ver� � grunnp�tsunni
    toppingCount = numberOfToppings;                ///hversu margar �leggstegundir
    toppings = new Topping[toppingCount];           /// array sem ver�ur skr�� � �leggstegundir
    currentToppingNum = 0;                          ///counter fyrir for l�ppu
}
void Pizza::addTopping(Topping topping){
    if(currentToppingNum < toppingCount){
        toppings[currentToppingNum] = topping;
        currentToppingNum++;
    }
}

