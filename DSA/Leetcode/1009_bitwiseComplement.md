## 1009_bitwiseComplement
[Link](https://leetcode.com/problems/complement-of-base-10-integer/) to Question.

## Algorithm
1. If n == 0 just return !n.
2. Now copy the value of n into another variable m.
3. Initialise a mask to 0.
4. Left shift the mask by one place.
5. Perform OR on the mask with 1.
6. Right Shift m by one place.
7. Repeat steps 4 to 6 till m != 0. This loop will form a mask of 1's of the same length as n.
8. Perform ~n which will invert all 1's and 0's.
9. Discard the leading 1's by performing & operation with the mask.

<br>
<b>Time Complexity : O(n)</b>
<br>
<b>Space Complexity : O(1)</b>