## 231_isPowerOfTwo
[Link](https://leetcode.com/problems/power-of-two/) to Question.

## Algorithm
1. If n == 0 just return false.
2. Now check n%2 == 0 which gives us divisibility by 2.
3. If true then divide n by 2.
4. Else return false.
5. Repeat steps 2 to 4 till n != 1.
6. Return true.

<br>
<b>Time Complexity : O(n)</b>
<br>
<b>Space Complexity : O(1)</b>
