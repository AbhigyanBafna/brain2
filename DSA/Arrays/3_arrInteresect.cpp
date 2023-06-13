#include <bits/stdc++.h> 
using namespace std;

// arr1 : 1 2 2 2 3 4
// arr2 : 2 2 3 3
// ans : 2 2 3
// The code finds common elements between the sorted arrays and prints them. Uses 2 pointer algo. 
// Time Complexity : O(n)
// Space Complexity : O(n)

int main(){
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(2);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr2.push_back(2);
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(3);
    int n = arr1.size();
    int m = arr2.size();
	int i = 0;
	int j = 0;
	vector<int> ans;

	while(i < n && j < m){
		
		if(arr1[i] == arr2[j]){
			
			ans.push_back(arr1[i]);
			i++;
			j++;
			
		}else if(arr1[i] < arr2[j]){
			i++;
		}else{
			j++;
		}
	}

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
	return 0;
}