## cn_allocateBooks.md
[Link](https://www.codingninjas.com/studio/problems/ayush-and-ninja-test_1097574) to Question.

## Algorithm
1. Initialise s to 0 according to binary search.
2. Define a variable sum with value 0.
3. Add the value of all elements in vector time using a for loop and store them in sum.
4. Initialise e = sum and ans = -1.
5. Now acc. to BS while s <= e we will -
6. Define mid to s + (e-s)/2

Fxn isPossible
1. We need a function isPossible which will check if a possible answer exists in the current iteration.
2. isPossible recieves n, m, time, the current mid as inputs and gives a boolean output.
3. It works keeping a count of the number of days and also studyTime per day and using a loop tries to maximise the studyTime by comparing it to mid.
4. Initialise dayCount to 1 and studyTime to 0.
5. Start a for loop for i=0, i < m, i++.
6. Check if studyTime + time[i] <= mid.
7. If true then that means we can add more time in the same day and hence we add time[i] to studyTime.
8. Else no more study can be done that day and we move on to the next day.
9. But now we need to check if there are any days left or does the next time[i] > mid.
10. If any of the above two conditions are true we return false.
11. Else we reset studyTime by making it equal to the current time[i].
12. End of for loop. Go back to Step 11.
13. Return true.
End of fxn isPossible

7. If isPossible returns true that means the current mid is a solution hence ans = mid.
8. It also means that all solutions ahead of current mid will add more studyTime per day and hence we discard it by e = mid-1.
9. Else isPossible is false then that means all solutions below mid are exceeding the days or elements inside time vector are bigger than them.
10. Hence we push s = mid+1;
11. End of while loop. Go back to step 5.
12. Return ans.

<br>
<b>Time Complexity : O(nlog(n))</b>
<br>
<b>Space Complexity : O(1)</b>
