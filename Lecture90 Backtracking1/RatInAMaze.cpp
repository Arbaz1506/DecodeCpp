// ### Problem Statement: Rat in a Maze

// Given a square matrix `maze[N][N]` where `N` is the size of the maze, the task is to find a path from the starting point (top-left corner) to the destination (bottom-right corner) for a rat. The rat can move in four possible directions: up, down, left, and right, but it cannot move through walls. The maze contains:
// - 1s: representing open paths where the rat can move.
// - 0s: representing walls where the rat cannot pass.

// ### Input:
// - A square matrix `maze[N][N]` where each element is either `1` (open path) or `0` (wall).

// ### Output:
// - If a path exists, output one such valid path in terms of movement directions (up, down, left, right).
// - If no path exists, return "No path exists."

// ### Constraints:
// - The rat can only move to cells containing `1`.
// - The rat starts at position `(0, 0)` and needs to reach `(N-1, N-1)`.
// - The rat can only move up, down, left, or right.

// ### Example:

// **Input:**
// ```
// N = 4
// maze = [
//     [1, 0, 0, 0],
//     [1, 1, 0, 1],
//     [0, 1, 0, 0],
//     [1, 1, 1, 1]
// ]
// ```

// **Output:**
// ```
// Path: "DDRR"
// ```

// **Explanation:**
// The rat can move down (D), down (D), right (R), right (R) to reach the destination.

#include <vector>
#include <iostream>
using namespace std;

int ans;

bool canWeGo(int n, int i, int j, vector<vector<int>> &grid)
{
    return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == 0;
}

void f(int n, int i, int j, vector<vector<int>> &grid)
{
    if (i == n - 1 and j == n - 1)
    {
        ans += 1;
        return;
    }

    grid[i][j] = 2; // this means wisited

    if (canWeGo(n, i, j - 1, grid))
    {
        f(n, i, j - 1, grid);
    }
    if (canWeGo(n, i, j + 1, grid))
    {
        f(n, i, j + 1, grid);
    }
    if (canWeGo(n, i - 1, j, grid))
    {
        f(n, i - 1, j, grid);
    }

    if (canWeGo(n, i + 1, j, grid))
    {
        f(n, i + 1, j, grid);
    }

    grid[i][j] = 0;
}

int ratInAMaze(vector<vector<int>> &grid, int n)
{
    ans = 0;
    if (grid[0][0] == 0)
        f(n, 0, 0, grid);
    return ans;
}

int main()
{

    vector<vector<int>> grid = {
        {0, 0, 1, 0, 0, 1, 0},
        {1, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 1},
        {1, 0, 1, 0, 0, 0, 0},
        {1, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 0, 0, 1, 0},
        {1, 1, 1, 1, 0, 0, 0}};


    cout << ratInAMaze(grid, 7);

    
}