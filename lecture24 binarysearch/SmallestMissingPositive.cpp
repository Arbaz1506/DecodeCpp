#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTY TO BE ENTERED IN THE ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "enter the element in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // linear approach here time complexity is O(n^2)
    // for (int i = 0; i < n; i++)
    // {
    //     if (i != arr[i])
    //         cout << i;
    // }
    // binary approach for less time complexity
    int lo=0;
    int ans=-1;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid)lo=mid+1;
        else{
            ans=mid;
            break;
        }
    }
    cout<<endl;
    cout<<ans;
}