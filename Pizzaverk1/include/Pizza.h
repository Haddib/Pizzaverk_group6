#ifndef PIZZA_H
#define PIZZA_H
#include "PizzaType.h"
#include "Topping.h"


class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        void makePizza(char, int);
        void addTopping(Topping, int);

    protected:

    private:
        PizzaType pizzatype; ///Size of pizza, each size has a different price.
        Topping* toppings; ///an array of toppings, each topping has a name, price (category?)
        int toppingCount;
        int currentToppingNum;

};

#endif // PIZZA_H
