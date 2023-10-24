# LingoLeap-Assessment
Algorithm-:
- m: Number of rows in the grid
- n: Number of columns in the grid
- v: 2D vector representing the grid
- dp: 2D memoization array
- ans: Maximum number of steps
  1. Define a recursive function max_step(r, c, m, n, v, dp) that computes the maximum
    number of steps starting from cell (r, c).
  2. If r is out of bounds (r < 0 or r >= m) or c is out of bounds (c < 0 or c >= n), return 0 as
    there are no more valid moves.
  3. If dp[r][c] is not -1 (i.e., already computed), return dp[r][c] as the result.
  4. Initialize three variables x, y, and z to 0. These will hold the maximum steps from three
    possible moves:

    a. Move to the cell (r+1, c+1) if it exists and if the value is greater.
    b. Move to the cell (r, c+1) if it exists and if the value is greater.
    c. Move to the cell (r-1, c+1) if it exists and if the value is greater.
  
  6. Recursively call max_step to compute the maximum steps for each of the three moves,
    and add 1 to each step.
  7. Return dp[r][c] as the maximum of x, y, and z.
  8. In the main function:
  
    a. Read the input values m, n, and the grid v.
    b. Create a memoization array dp with all values initialised to -1.
  
  9. Initialize ans to 0.
  10. Loop through each starting row i from 0 to m-1:
  11. 
    a. Calculate the maximum number of steps w starting from cell (i, 0) using max_step
      function.
    b. Update ans to be the maximum of the current ans and w.

  13. Print the final value of ans, which represents the maximum number of steps.
  14. End of the algorithm.
  15. Execute the main function to find the result
