#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>

using namespace std;


class Topping
{
    public:
        Topping();
        virtual ~Topping();
        friend istream& operator >> (istream& in, Topping topping);


    protected:

    private:
        string name;
        char category;
        int price; /// fer eftir stærð pítsunnar og category.
};

#endif // TOPPING_H
