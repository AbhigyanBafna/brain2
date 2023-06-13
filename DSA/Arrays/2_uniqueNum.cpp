#include <iostream>
using namespace std;

//Finds the unique number of from the given array by applying XOR on each element.
//Time Complexity : O(N)
//Space Complexity : O(N)

int main() {
    int arr[] = {5,4,3,5,4};
    int size = 5;
    int ans = 0;

    for(int i = 0; i < size; i++){
        ans ^= arr[i];
    }

    cout << ans << endl;
    return ans;
}