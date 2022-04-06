#include <iostream>
using namespace std;

int main() {
    int secretNumber = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool outOfGuesses = false;
    while(secretNumber!=guess && !outOfGuesses){
        if(guessCount<guessLimit){
            cout<<"Enter your guess : " << endl;
            cin>>guess;
            guessCount++;
        }else{
            outOfGuesses = true;
        }
        
    }
    if(outOfGuesses){
        cout<<"You Lose!" << endl;
    }else{
        cout<<"You Win!" << endl;
    }
    
    return 0;
}
