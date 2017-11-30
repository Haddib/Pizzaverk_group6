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
    pizzatype.setPizzaType(pizzaSize);
    toppingCount = numberOfToppings;
    toppings = new Topping[toppingCount];
    currentToppingNum = 0;
}
void Pizza::addTopping(Topping topping, int numberOfToppings){
    for (int i = 0 ; i < numberOfToppings ; i++){
        if(currentToppingNum < toppingCount){
            toppings[currentToppingNum] = topping;
            currentToppingNum++;
        }
    }
}
