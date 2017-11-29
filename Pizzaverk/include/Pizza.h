#ifndef PIZZA_H
#define PIZZA_H
#include "Topping.h"


class Pizza
{
    public:
        Pizza();
        Pizza(int numberOfToppings);
        virtual ~Pizza();

        void initialize(int numberOfToppings);
        void clean();

        void addTopping(Topping topping);

        friend ostream& operator << (ostream& out, const Pizza& pizza);

        friend istream& operator >> (istream& in, Pizza& pizza);


    protected:

    private:
        Topping* toppings;
        int toppingCount;
        int currentToppingNum;
};

#endif // PIZZA_H
