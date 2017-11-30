#ifndef ORDER_H
#define ORDER_H
#include "Pizza.h"



class Order
{
    public:
        Order();
        virtual ~Order();

        void print();
        int findLineInTxt(ifstream& file, int line);


    protected:

    private:
        char pizzaSize;
        int numberOfToppings;
        Pizza pizza;
};

#endif // ORDER_H
