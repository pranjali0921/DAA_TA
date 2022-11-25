# DAA_TA
## Path in Matrix
### Problem Statement
Step1: Create a 10x10 matrix
<br/>
Step2: Populate the matrix with random numbers between -25 to +25
<br/>
Step3: Select two arbitrary locations from the matrix which are minimum FIVE rows apart.
<br/>
Step4: Find the path between two locations: such that the path does not use “Diagonal”
elements. The sum of numbers present on the path between two cells should
<br/>
a) Maximum
<br/>
b) Minimum
<br/>
The solution should be designed, with an approach to avoid using each and every
element of the matrix in computation.

### Procedure
With the help of Breadth First Search Algorithm we initiated the implementation.
<br/>
The main function consists of an array of size nxn where n=10 , generating random numbers for the array 'a' using rand() function.
<br/>
Initially we are maintaining a visited array in which all the elements of the array are initialized to 0 and after visiting a vertex in the original matrix the value of same position in the visited  array is changed to 1.
<br/>
More two vectors are being maintained namely “vmax“ and “vmin”,these two are globally initialized and are saving the vertex which is visited and is contributing to the path. 
<br/>
A recursive function BFS has been called which updates the sum accordingly consisting of nested if conditions to update the value of sum. 
<br/>
Backtracking algorithm is used to solve this problem statement.
<br/>
Lastly, printing our final result using the auto function by traversing the vmin and vmax array.
<br/>
Time Complexity: n*O(2^n)

### Test Cases:
Case 01-
(0,0) to (4,4)
<br/>
Output 01:
<br/>
Initial value of x is:0
<br/>
Initial value of y is:0
<br/>
Final value of x is:4
<br/>
Final value of y is:4
<br/>
Maximum value: 155
<br/>
The path is as follows: 16 -> -9 -> 19 -> 7 -> 12 -> 19 -> 0 -> 8 -> 9 -> 6 -> 19 -> 10 -> -9 -> 23 -> 8 -> 5 -> 12 ->
<br/>
Minimum value: -78
<br/>
The path is as follows: 16 -> -9 -> -22 -> -20 -> -15 -> 8 -> 0 -> -17 -> 12 -> 7 -> -19 -> -7 -> 1 -> -25 -> 12 ->
<br/>
Case 02-
(0,0) to (4,1)
<br/>
Output 02:
<br/>
Initial value of x is:0
<br/>
Initial value of y is:0
<br/>
Final value of x is:4
<br/>
Final value of y is:1
<br/>
Maximum value: 124
<br/>
The path is as follows: 16 -> -9 -> 19 -> 7 -> 12 -> 19 -> 0 -> 8 -> 9 -> 6 -> 19 -> 10 -> -9 -> 23 -> 8 -> 5 -> 12 -> -25 -> 1 -> -7 ->
<br/>
Minimum value: -82
<br/>
The path is as follows: 16 -> -9 -> -22 -> -20 -> -15 -> 8 -> 0 -> -17 -> 8 -> -25 -> 1 -> -7 ->
