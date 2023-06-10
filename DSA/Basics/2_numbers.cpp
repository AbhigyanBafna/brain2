#include<iostream>
using namespace std;

//Decimal to Binary
int binConvert(int dec){

    int bin = 0;
    int i = 1;

    while(dec != 0){
        int bit = dec & 1;
        bin += (bit*i);
        dec = dec >> 1;
        i *= 10;
    }
    return bin;

}

//Binary to Decimal
int decConvert(int bin){

    int dec = 0;
    int i = 1;

    while(bin != 0){
        int bit = bin & 1;
        dec += (bit*i);
        bin /= 10;
        i *= 2;
    }
    return dec;
}

//Reverses a given Integer.
int reverseInt(int x){

    int ans = 0;
    int i = 1;

    while(x != 0){
        int digit = x % 10;
        ans = ans * 10 + digit;
        x /= 10;
    }

    return ans;
}

int main(){
    int a1 = binConvert(999);
    int a2 = decConvert(a1);
    int a3 = reverseInt(1234);
    cout << "Ans Bin : " << a1 << endl;
    cout << "Ans Dec : " << a2 << endl;
    cout << "Ans Rev : " << a3 << endl;
}