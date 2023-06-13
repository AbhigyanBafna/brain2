#include<iostream>
#include <vector>
using namespace std;

//Takes an user input vector and reverses each alternate element if possible.
//Time Complexity : O(N^2)
//Space Complexity : O(N)

int* createArray(int size){

    int* arr = new int[size];

    for(int i = 0; i < size; i++){
        
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    return arr; 
}

void printArray(int arr[], int size){

    cout << "The array is : ";

    for(int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }

    cout << endl;

}

void swap(int& a, int& b){

    int temp;
    temp = a;
    a = b;
    b = temp;

}

int main(){

    int size;
    cout << "Enter number of array elements: ";
    cin >> size;

    int* array = createArray(size);
    
    for(int i = 0; i <= size; i += 2 ){

        if(i+1 < size){

            swap(array[i], array[i+1]);

        }

    }

    printArray(array, size);


    return 0;
}