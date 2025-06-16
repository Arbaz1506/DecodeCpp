#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;
    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);
    int total = rightways + downways;
    return total;
}
int main()
{
    int starting_rows;
    cout << "ENTER THE STARTING ROWS: ";
    cin >> starting_rows;
    int starting_cols;
    cout << "ENTER THE STARTING COLS: ";
    cin >> starting_cols;
    int ending_rows;
    cout << "ENTER THE ENDING ROWS: ";
    cin >> ending_rows;
    int ending_cols;
    cout << "ENTER THE ENDING COLS: ";
    cin >> ending_cols;
    cout << "NUMBER OF WAYS:" << maze(starting_rows, starting_cols, ending_rows, ending_cols);
}