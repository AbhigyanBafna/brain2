## 442_findDuplicates
[Link](https://leetcode.com/problems/find-all-duplicates-in-an-array/) to Question.

## Algorithm
1. Initialise another ans vector.
2. Sort the nums array.
3. Using a for loop compare each element with the next one.
4. If they are equal push back the element into ans vector. 
5. End of for loop
6. Return ans vector.

<br>
<b>Time Complexity : O(n log n)</b>
<br>
<b>Space Complexity : O(n)</b>