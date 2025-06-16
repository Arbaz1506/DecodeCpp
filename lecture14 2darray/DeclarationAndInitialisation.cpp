#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // agar initialise nahii krr rhe to size dena bahut zaroori haii
    // {{1,2,3},{4,5,6},{7,8,9}} ye hai value initialise krna 1 2 3 ek array 4 5 6 doosra array 7 8 9 teesra array and in sabb ka array arr[][]  haii we can say 2D array are array of arrays
    // arr[n][m]=n is row number and m is column number
    cout << arr[0][0]; // value nikalne k liye
    cout << endl;
    cout << arr[1][2];
}