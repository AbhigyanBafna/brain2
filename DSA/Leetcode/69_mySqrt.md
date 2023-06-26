## 69_mySqrt.md
[Link](https://leetcode.com/problems/sqrtx/) to Question.

## Algorithm
1. Initialise binary search start and end.
2. Initialise variable ans to 0.
3. Initialise a long long int i as the mid of binary search.
4. If i*i equals the x(the given number) then just return i.
5. Else if i*i > x then that means all numbers ahead of i will be > x, hence make end = i-1.
6. If even that is not true then that means all numbers behind i are smaller.
7. Hence make start = i+1 and ans = i.
8. Repeat from step 3 until start <= end.
9. Return ans.

<br>
<b>Time Complexity : O(log n)</b>
<br>
<b>Space Complexity : O(1)</b>
