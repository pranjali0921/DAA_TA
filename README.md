# DAA_TA
## Path in Matrix
### Problem Statement
Step1: Create a 10x10 matrix
Step2: Populate the matrix with random numbers between -25 to +25
Step3: Select two arbitrary locations from the matrix which are minimum FIVE rows apart.
Step4: Find the path between two locations: such that the path does not use “Diagonal”
elements. The sum of numbers present on the path between two cells should
a) Maximum
b) Minimum
The solution should be designed, with an approach to avoid using each and every
element of the matrix in computation.

### Procedure
With the help of Breadth First Search Algorithm we initiated the implementation.
The main function consists of an array of size nxn where n=10 , generating random numbers for the array 'a' using rand() function
Initially we are maintaining a visited array in which all the elements of the array are initialized to 0 and after visiting a vertex in the original matrix the value of same position in the visited  array is changed to 1.
More two vectors are being maintained namely “vmax“ and “vmin”,these two are globally initialized and are saving the vertex which is visited and is contributing to the path. 
A recursive function BFS has been called which updates the sum accordingly consisting of nested if conditions to update the value of sum. 
Backtracking algorithm is used to solve this problem statement.
Lastly, printing our final result using the auto function by traversing the vmin and vmax array.
Time Complexity: n*O(2^n)

### Test Cases:
Case 01-
(0,0) to (4,4)
Output 01:
Initial value of x is:0
Initial value of y is:0
Final value of x is:4
Final value of y is:4
Maximum value: 155
The path is as follows: 16 -> -9 -> 19 -> 7 -> 12 -> 19 -> 0 -> 8 -> 9 -> 6 -> 19 -> 10 -> -9 -> 23 -> 8 -> 5 -> 12 ->
Minimum value: -78
The path is as follows: 16 -> -9 -> -22 -> -20 -> -15 -> 8 -> 0 -> -17 -> 12 -> 7 -> -19 -> -7 -> 1 -> -25 -> 12 ->

Case 02-
(0,0) to (4,1)
Output 02:
Initial value of x is:0
Initial value of y is:0
Final value of x is:4
Final value of y is:1
Maximum value: 124
The path is as follows: 16 -> -9 -> 19 -> 7 -> 12 -> 19 -> 0 -> 8 -> 9 -> 6 -> 19 -> 10 -> -9 -> 23 -> 8 -> 5 -> 12 -> -25 -> 1 -> -7 ->
Minimum value: -82
The path is as follows: 16 -> -9 -> -22 -> -20 -> -15 -> 8 -> 0 -> -17 -> 8 -> -25 -> 1 -> -7 ->
