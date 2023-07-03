#include<iostream>
using namespace std;

//Time Complexity = O(N^2)
//Space Complexity = O(1)
//Best Case = O(N^2)
//Worst Case = O(N^2)
//Unstable Algo.

void display(int arr[], int size){

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
}

int main(){
    int arr[] = {5, 50, 14, 1, 64, 29};
    int size = 6;

    display(arr, size);

    for(int i = 0; i<size-1; i++){

        int minIndex = i;

        for(int j = i+1; j<size; j++){

            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }

        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }

    display(arr, size);

    return 0;
}