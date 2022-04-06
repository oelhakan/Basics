#include <iostream>
#include <cmath>

using namespace std;

int power(int baseNumber, int exponent){
    return pow(baseNumber, exponent);
}

int main(int argc, const char * argv[]) {
    
    cout<< power(3,3) << endl;
    
//    int nums[] = {1,2,5,7,3};
//    for(int i = 0; i<5; i++){
//        cout<< nums[i] <<endl;
//    }
//    int dayNumber;

//        cout << "Enter the day number : ";
//        cin >> dayNumber;
//    switch (dayNumber) {
//        case 1:
//            cout << "Monday\n";
//            break;
//        case 2:
//            cout << "Tuesday\n";
//            break;
//        case 3:
//            cout << "Wednesday\n";
//            break;
//        case 4:
//            cout << "Thursday\n";
//            break;
//        case 5:
//            cout << "Friday\n";
//            break;
//        case 6:
//            cout << "Saturday\n";
//            break;
//        case 7:
//            cout << "Sunday\n";
//            break;
//        default:
//            cout << "There are only 7 days in a week\n";
//            break;
//    }
//
//    int i = 1;
//
//    while(i<10){
//        cout<< i << endl;
//        i++;
//    }
    return 0;
}
