#ifndef PIZZA_H
#define PIZZA_H
#include "PizzaType.h"


class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        void makePizza(char);

    protected:

    private:
        PizzaType pizzatype; ///Size of pizza, each size has a different price.
       // Topping topping; ///an array of toppings, each topping has a name, price (category?)


};

#endif // PIZZA_H
