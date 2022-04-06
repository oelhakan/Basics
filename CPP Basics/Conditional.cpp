#include <iostream>

using namespace std;
int maxNumber(int number1, int number2, int number3);

int main() {
    bool isMale = true;
    bool isTall = true;
    if(isMale || isTall){
        cout << "You are either tall or a  male.\n";
    }else{
        cout << "You are neither tall nor a male";
    }
    
    cout << maxNumber(10,20,30) << endl;
    return 0;
}

int maxNumber(int number1, int number2, int number3){
    if(number1>=number2 && number1>=number3){
        return number1;
    }else if(number2>=number1 && number2>=number3){
        return number2;
    }else{
        return number3;
    }
}
