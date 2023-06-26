## 191_hammingWeight
[Link](https://leetcode.com/problems/number-of-1-bits/) to Question.

## Algorithm
1. Initialise a counter variable i.
2. Check if n & 1 which will compare the last digit of n with 1.
3. If true then i++.
4. Next Right Shift n by 1 place to compare the next digit.
5. Loop steps 2 to 4 till n != 0.
6. Return i. 

<br>
<b>Time Complexity : O(n) </b>
<br>
<b>Space Complexity : O(1) </b>