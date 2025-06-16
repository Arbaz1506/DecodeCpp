#include <iostream>
using namespace std;
void FirstNegetive(int n, int arr[], int k)
{
    int prevIdx = -1;
    int ans[n - k + 1];
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            prevIdx = i;
            break;
        }
    }
    if (prevIdx == -1)
        ans[0] = 1;
    else
        ans[0] = arr[prevIdx];

    int i = 1;
    int j = k;
    while (j < n)
    {
        if (prevIdx >= i)
            ans[i] = arr[prevIdx];
        else
        {
            prevIdx=-1;
            for (int x = i; x <= j; x++)
            {
                if (arr[x] < 0)
                {
                    prevIdx = x;
                    break;
                }
            }
            if (prevIdx != -1)
               { ans[i] = arr[prevIdx];}
            else
              {  ans[i] = 1;}
        }
        i++;
        j++;
    }
    cout << endl
         << "answer array is: " << endl;
    for (int i = 0; i < n - k + 1; i++)
    {
        cout << ans[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE ENTERED IN THE ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "ENTER THE SIZE OF THE WINDOW: ";
    cin >> k;
    FirstNegetive(n, arr, k);
    return 0;
}