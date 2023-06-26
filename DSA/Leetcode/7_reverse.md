## 7_reverse
[Link](https://leetcode.com/problems/reverse-integer/) to Question.

## Algorithm
1. Initialise a variable ans to 0.
2. Get the last digit by x % 10.
3. Check if the ans will go beyond integer limits. (ans > INT_MAX/10) OR (ans < INT_MIN/10)
4. If true return 0.
5. Next ans = ans * 10 + digit which will move every unit to one place higher and add the current digit.
6. divide x by 10 to get the next digit.
7. Loop 2 to 6 till x != 0.
8. Return ans.

<br>
<b>Time Complexity : O(n) </b>
<br>
<b>Space Complexity : O(1) </b>