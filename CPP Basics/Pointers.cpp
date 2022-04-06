#include <iostream>

using namespace std;

// POINTER == MEMORY ADRESS

int main() {
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";
    
//PRINTING OUT MEMORY ADRESSES OF OUR VARIABLES
//    cout << &age << endl;
//    cout << &gpa << endl;
//    cout << &name << endl;
    
    
//USE * WHEN YOU WANT TO CREATE A VARIABLE THAT STORES THE POINTER
//USE THE SAME DATA TYPE
    
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;
    cout << pAge;
    cout << endl;
    cout << pGpa;
    cout << endl;
    cout << pName;
    cout << endl;
    
    // DEREFERENCE A POINTER == GO TO THE MEMORY ADRESS AND GRAB THE VALUE AND USE IT IN OUR PROGRAM
    // USE * AGAIN TO DEREFERENCE
    cout << *pAge;
    cout << endl;
    cout << *pGpa;
    cout << endl;
    cout << *pName;
    cout << endl;
    //PRINTIN OUT ACTUAL VALUES FROM THE POINTER
    //    cout << *&age << endl;
    //    cout << *&gpa << endl;
    //    cout << *&name << endl;
    return 0;
    
}
