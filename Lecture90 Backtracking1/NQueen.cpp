#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> grid;

bool canPlaceQueen(int row, int col, int n)
{
    // Check column
    for (int i = row - 1; i >= 0; i--)
    {
        if (grid[i][col] == 'q')
        {
            return false;
        }
    }

    // Check left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (grid[i][j] == 'q')
        {
            return false;
        }
    }

    // Check right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (grid[i][j] == 'q')
        {
            return false;
        }
    }

    return true;
}

void f(int row, int n)
{
    if (row == n)
    {
        // Print the current solution
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl; // Separate different solutions
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (canPlaceQueen(row, col, n))
        {
            grid[row][col] = 'q';
            f(row + 1, n);
            grid[row][col] = '.'; // Backtrack
        }
    }
}

void solveNQueens(int n)
{
    grid.resize(n, vector<char>(n, '.'));
    f(0, n);
}

int main()
{
    solveNQueens(4);
}
