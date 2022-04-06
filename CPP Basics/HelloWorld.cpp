#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string characterName = "Tom";
    std::cout << "There once was a man named " << characterName << endl;      //ENDL STANDS FOR END LINE WE CAN ALSO USE \n
    
    char grade = 'A';
    string phrase = "GOOD";
    int age = 50;
    float gpaFloat = 2.3;
    double gpaDouble = 4.58674;
    // double can store more decimal points than a float
    bool isMale = true;
    
    cout << phrase << endl;
    
    phrase[0] = 'M';
    
    cout << phrase << endl;
    
    cout << phrase.find("OO", 0) << endl;
    
    cout << phrase.substr(1,3) << endl;

    cout<< 40%3 << endl;
    
    int wholeNumber = 5;
    double doubleNumber = 5.5;
    
    wholeNumber++;
    
    cout<<wholeNumber<<endl;

    cout<<doubleNumber+wholeNumber<<endl;
    
    cout<<fmax(3,5)<<endl;


    
    
    
    return 0;
}

