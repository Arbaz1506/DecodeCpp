#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT IN THE ARRAY: ";
    cin >> n;
    int arr[n];
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_ele)
        {
            max_ele = arr[i];
            count = 1;
        }
        else if (arr[i] == max_ele)
        {
            count++;
           
        }
         ans = max(ans, count);
    }
    cout << ans << endl;
}