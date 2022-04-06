#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter the operator : ";
    cin >> op;
    cout << "Enter second number : ";
    cin >> num2;
    

    
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
            break;
        default:
            cout<< "\nINVALID OPERATOR OR INVALID NUMBER" << endl;
            break;
    }
    
    if(op == '+'){
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    }else if(op == '-'){
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    }else if(op == '*'){
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
    }else if(op == '/'){
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    }else{
        cout<< "\nINVALID OPERATOR OR INVALID NUMBER" << endl;
    }

    
    
    
//    cout << num1+num2<<endl;
    return 0;
}
