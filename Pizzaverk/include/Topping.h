#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>

using namespace std;

class Topping
{
    public:
        Topping();
        Topping(char* name, double price);
        virtual ~Topping();
        friend ostream& operator << (ostream& out, const Topping& topping);
        friend istream& operator >> (istream& in, Topping& topping);


    protected:

    private:
        char name[32];
        double price; ///vi� h�fum mismunandi st�r�ir

};

#endif // TOPPING_H
