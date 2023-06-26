## 852_peakIndexInMountainArray.md
[Link](https://leetcode.com/problems/peak-index-in-a-mountain-array/) to Question.

## Algorithm
1. Using binary search initialise start and end.
2. Initialise peak variable to 0.
3. Initialise mid acc. to binary search.
4. If arr[mid] > arr[mid-1] that would mean all elements before mid are smaller.
5. Hence change start = mid.
6. Also check if arr[mid+1] < arr[mid] as if this is true along with step 4 that means mid is peak.
7. Hence peak = mid and break loop.
8. If Step 4 is false that would mean all elements after mid are larger.
9. Hence change end = mid.
10. Repeat from step 3 till peak is 0.
11. Return peak.

<br>
<b>Time Complexity : O(log n)</b>
<br>
<b>Space Complexity : O(1)</b>
