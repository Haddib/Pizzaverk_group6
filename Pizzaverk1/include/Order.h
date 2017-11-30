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
        char S;
        Pizza pizza;
};

#endif // ORDER_H
