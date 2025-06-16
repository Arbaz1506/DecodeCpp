#include <iostream>
using namespace std;
int maze(int er, int ec)
{
    if (er < 1 || ec < 1)
        return 0;
    if (er == 1 && ec == 1)
        return 1;
    int right_ways = maze(er, ec - 1);
    int down_ways = maze(er - 1, ec);
    int totalways = right_ways + down_ways;
    return totalways;
}
int main()
{
    int ending_rows;
    cout << "ENTER THE ENDING ROWS :";
    cin >> ending_rows;
    int ending_cols;
    cout << "ENTER THE ENDING COLS: ";
    cin >> ending_cols;
    maze(ending_rows, ending_cols);
    cout<<"TOTAL NUMBER OF WAYS :"<<maze(ending_rows,ending_cols);
}