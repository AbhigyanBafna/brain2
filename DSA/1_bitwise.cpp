#include <iostream>
using namespace std;

int main(){
    //Bitwise
    int a = 5;
    int b = 6;

    cout << "a & b = " << (a&b) << endl;
    cout << "a | b = " << (a|b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "a ^ b = " << (a^b) << endl;

    //Left and Right Shift
    a = 6;

    int ans1 = a << 2;
    int ans2 = a >> 2; 

    cout << ans1 << " " << ans2 << endl;

    //Conditionals
    a = 1;
    b = 4;

    if (a-- > 0 || ++b > 2){
        cout << "Condition True ";
    }
    else {
        cout << "Condition False ";
    }
    cout << a << " " << b << endl;

}

/*
Bitwise -
&(and) results in 1 only if both bits are 1.
|(or) results in 1 when atleast one bit is 1.
~(bitwise not) takes one's complement of the number.
^ (XOR) results in 1 only if both the bits are different.

Left and Right Shift -
<<(LS) shifts the operand to the left in binary. Essentially multiplying. 
>>(RS) shifts the operand to the right in binary. Essentially dividing.

Conditionals -
Output:
Condition True 0 4

Interestingly, b remains 4 here even after ++b, this happened because in an OR conditional, if the previous condition was true the compiler does not check further conditionals.
*/