#include<iostream>
using namespace std;

const int APPLE = 1;
const int ORANGE = 2;
const int PEACH = 3;
const int MELON = 4;
const int COCONUT = 5;

int main() {
    
    int fruit;
    cout << "Input one of the numbers in 1~3: ";
    cin >> fruit;

    switch(fruit){
        case APPLE:
            cout << "Selected Fruit is Apple!" << endl;
            break;
        case ORANGE:
            cout << "Selected Fruit is Orange!" << endl;
            break;
        case PEACH:
            cout << "Selected Fruit is Peach!" << endl;
            break;
        default:
            cout << "?? nothing found." << endl;
    }

    //Without break
    cout << "Input one of the numbers in 1~5: ";
    cin >> fruit;

    switch(fruit){
        case APPLE:
        case ORANGE:
        case PEACH:
            cout << "Let's peel the fruit!" << endl;
            break;
        case MELON:
        case COCONUT:
            cout << "Let's cut the fruit!" << endl;
    }

    return 0;
}