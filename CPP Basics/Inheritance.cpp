#include <iostream>

using namespace std;

class Chef{
    public :
    void makeChicken(){
        cout << "The Chef Makes Chicken" << endl;
    }
    void makeSalad(){
        cout << "The Chef Makes Salad" << endl;
    }
    void makeSpecial(){
        cout << "The Chef Makes BBQ Ribs" << endl;
    }
};

class ItalianChef : public Chef{
    public :
    void makePasta(){
        cout << "The Chef Makes Pasta" << endl;
    }
    void makeSpecial(){
        cout << "The Chef Makes Lasagna" << endl;
    }
};

int main() {
    Chef chef;
    chef.makeSpecial();
    ItalianChef italianChef;
    italianChef.makeSpecial();
    return 0;
}
