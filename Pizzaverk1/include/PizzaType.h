#ifndef PIZZATYPE_H
#define PIZZATYPE_H
#include <fstream>

using namespace std;

class PizzaType
{
    public:
        PizzaType();
        virtual ~PizzaType();

        void setPizzaType(char);
        int findLineInTxt(ifstream& file, int line);

    protected:

    private:
        int PizzaSize;
        int SizePrice;
};

#endif // PIZZATYPE_H
