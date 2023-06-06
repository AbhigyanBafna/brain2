#include<iostream>
using namespace std;

int main(){
    int dec = 425;
    int bin = 0;
    int i = 1;

    while(dec != 0){
        int bit = dec & 1;
        bin += (bit*i);
        dec = dec >> 1;
        i *= 10;
    }
    cout << bin << endl;
}