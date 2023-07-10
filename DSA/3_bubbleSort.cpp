 #include<iostream>
 using namespace std;
 
 //Time Complexity = O(N^2)
 //Space Complexity = O(1)
 //Best Case = O(N)
 //Worst Case = O(N^2)
 //Stable, In-place Algo.

 void display(int arr[], int size){

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    
}

void swapEle(int arr[], int first, int second){

    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;

}
 
 int main(){

    int arr[] = {5, 50, 14, 1, 64, 29};
    int size = 6;

    display(arr, size);

    for(int i = 1; i < size; i++){
        // i represents the current round of swapping.
        bool swap = false; //Optimization

        for(int j = 0; j < size-1; j++){
            // j traverses and swaps element if the next one is bigger.
            if(arr[j] > arr[j+1]){

                swapEle(arr, j, j+1);
                swap = true; //Optimization

            }

        }

        if(swap == false){
            break; //Optimization
        }

    }

    display(arr, size);

    return 0;
 }