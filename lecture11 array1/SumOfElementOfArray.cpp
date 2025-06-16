#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENTS OF ARRAY:-";
    for (int i = 0; i <= (n - 1); i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i <= (n - 1); i++)
    {
        sum += arr[i];
    }
    cout << "THE SUM OF ALL THE ELEMNT OF ARRAY IS:-";
    cout << sum;
}