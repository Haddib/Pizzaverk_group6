#include "Pizza.h"
#include <iostream>

using namespace std;

Pizza::Pizza()
{
    PizzaType();
}

Pizza::~Pizza()
{
    //dtor
}
void Pizza::makePizza(char pizzaSize){
    pizzatype.setPizzaType(pizzaSize);
}
