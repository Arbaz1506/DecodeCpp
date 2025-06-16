#include <iostream>
using namespace std;
// int prev(int height1[], int n)
// {

//     int prev[n];
//     prev[0] = -1;
//     int max = height1[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (max < height1[i])
//             prev[i] = max;
//         max = height1[i];
//     }
// }
// int next(int height2[], int n)
// {

//     int next[n];
//     next[n - 1] = -1;
//     int max = height2[0];
//     for (int i = n - 1; i > 0; i--)
//     {
//         if (max < height2[i])
//             next[i] = max;
//         max = height2[i];
//     }
// }
// int mini()
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT IN THE ARRAY: ";
    cin >> n;

    int height[n];
    cout << " ENTER THE HEIGHT OF THE BUILDINGS:-";
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    cout << "THE HEIGHT OF THE BUILDINGS ARE:-";
    for (int i = 0; i < n; i++)
    {
        cout << height[i] << " " << endl;
    }
    // code begins
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max;
        if (max < height[i])

            max = height[i];
    }
    int next[n];
    next[n - 1] = -1;
    max = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max;
        if (max < height[i])

            max = height[i];
    }
    int mini[n];
    for (int i = 0; i < n; i++)
    {
        mini[i] = min(prev[i], next[i]);
    }
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (height[i] < mini[i])
            water += (mini[i] - height[i]);
    }
    // prev(height,n);
    // next(height,n);
    cout << "AMOUNT OF WATER TRAPPED IS:-";
    cout << water;
}