#include<iostream>
using namespace std;

int main(){
    int bin = -101011111;
    int dec = 0;
    int i = 1;

    while(bin != 0){
        int bit = bin & 1;
        dec += (bit*i);
        bin /= 10;
        i *= 2;
    }
    cout << dec << endl;
}