## 75_sortColors
[Link](https://leetcode.com/problems/sort-colors/) to Question.

## Algorithm
1. Initialise a for loop with  i = 0; i < nums.size()-1
2. If element > element + 1 then -
3. Swap the elements using temp variable.
4. Reset i to -1 so that it becomes 0 and the loop starts again to check for elements left behind.
5. i++ and Return to for loop in step 1.
6. Array will be sorted after loop executes.

<br>
<b>Time Complexity : O(n^2)</b>
<br>
<b>Space Complexity : O(1)</b>