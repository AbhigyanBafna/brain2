#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int max = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i <= max; i += 2 ){
        cout << "printing" << arr[i] << endl;
        if(i+1 < max){
            
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = arr[i];
            arr[i+1] = temp;
        }

    }

    for(int i = 0; i < max; i++ ){
        cout << arr[i] << endl;
    }


    return 0;
}