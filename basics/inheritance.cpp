#include<iostream>
using namespace std;

// inheritance

class Chef {
    public:
    void makeChicken(){
        cout << "The chef make chicken" << endl;
    }
    void makeSalad(){
        cout << "The chef make salad" << endl;
    }
    void makeSpecialDish(){
        cout << "The chef make special Dish" << endl;
    }
};

class ItalianChef : public Chef{
    public:
    void makePasta(){
        cout << "The chef make Pasta" << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makeChicken();
    italianChef.makePasta();

    return 0;
}