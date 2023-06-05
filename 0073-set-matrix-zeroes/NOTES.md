brute force approach:-
1. Traverse and find where 0 is
2. pass on its row and col to a function which marks the whole that row with -1 only if it is not equal to 0.
3.Traverse again and mark all -1's with 0
(not valid for negative elements)
​
Time Complexity:-
O((N*M)*(N + M)) + O(N*M), where N = no. of rows in the matrix and M = no. of columns in the matrix.
​
better approach:-
1. create two arrays row[] and col[] and initialize it wih zero.
2. mark row[i] or col[j] as 1 if zeros is encountered.
3. traverse again and if row[i] or col[j]==1 mark that column or row as 0
​
Time Complexity: O(2*(N*M)), where N = no. of rows in the matrix and M = no. of columns in the matrix.