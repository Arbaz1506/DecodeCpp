#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS: ";
    cin >> n;
    int arr[n];

    cout << "ENTER THE ELEMENTS: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hi = n - 1;
    int lo = 0;
    bool ispalindrome = true;
    while (lo < hi)
    {
        if (arr[hi] != arr[lo])
        {
            ispalindrome = false;
            break;
        }
        hi--;
        lo++;
    }
    if (ispalindrome == true)
        cout << "given number is palindrome";
    else
        cout<<"not palindrome";
}
