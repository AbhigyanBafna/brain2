## 1207_uniqueOccurrences
[Link](https://leetcode.com/problems/unique-number-of-occurrences/) to Question.

## Algorithm
1. If array's size is 2 then return true if elements are different else false.
2. Sort the array, initiaze a count variable to 1 and an arr2 vector.
3. Start a for loop with i = 1; i < arr.size(); i++
4. Till the condition : arr[i] == arr[i-1] is true -
5. Increment count and i.
5. Check if i >= arr.size() and if true then break out of the loop at step 4.
6. Else go back to step 4.
7. Push count into arr2 and reset count to 1.
8. End of for loop.
9. If the last and second last element of arr1 are not equal -     (arr[arr.size()-1]!=arr[arr.size()-2])
10. Then push 1 into arr2. (We do step 9 and 10 because our earlier loop misses out the last element if it's occurance is 1).
11. Sort the second array.
12. Use a for loop to compare each element with next element in arr2.
13. If any of the element == next element then return false.
14. End of for loop.
15. Return true.


<br>
<b>Time Complexity : O(n log n)</b> Not sure about this as the while loop here increments i too, so essentially they are one loop which negates O(n^2) hence falling to the complexity of sort fxn?
<br>
<b>Space Complexity : O(n)</b> 
