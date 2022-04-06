#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

int cube(int number);

int main(int argc, const char * argv[]) {
    sayHi("Mike", 32);
    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << ".You are " << age << " years old" << endl;
    cout << cube(3) << endl;
}

int cube(int number){
    return pow(number, 3);
}

