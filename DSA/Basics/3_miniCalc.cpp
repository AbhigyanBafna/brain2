#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n1, n2;
    char op;
    cout << "Enter Num1: ";
    cin >> n1;
    cout << "Enter Num2: ";
    cin >> n2;
    cout << "Enter Operation Symbol: ";
    cin >> op;

    switch(op){

        case '+':
            cout << "Your answer is :" << n1 + n2 << endl;
            break;
        case '-':
            cout << "Your answer is :" << n1 - n2 << endl;
            break;
        case '*':
            cout << "Your answer is :" << n1 * n2 << endl;
            break;
        case '/':
            cout << "Your answer is :" << n1 / n2 << endl;
            break;
        case '%':
            cout << "Your answer is :" << n1 % n2 << endl;
            break;
        case '^':
            cout << "Your answer is :" << pow(n1, n2)<< endl;
            break;
        default:
            cout << "Unknown Symbol. Please try again.";

    }

    return 0;
}