#include<iostream>
#include<math.h>
using namespace std;

//Time Complexity = O(log N)
//Space Complexity = O(1)

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }

    }
    return -1;
}

int main(){

    int arr[] = {2,4,6,7,8,9,100};

    int index = binarySearch(arr, 7, 6);
    cout << index << endl;
    return 0;
}