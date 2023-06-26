## 1281_subtractProductAndSum
[Link](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) to Question.

## Algorithm
1. By using n%10 we can get the digit at units place.
2. Add digit + sum to the sum variable.
3. Multiply Digit * Product to the product variable.
4. Change the units place by n/10 giving us the next digit.
5. Loop till n!=0.
6. Return product - sum.

<br>
<b>Time Complexity : O(n) </b>
<br>
<b>Space Complexity : O(1) </b>