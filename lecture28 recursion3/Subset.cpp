#include <iostream>
#include <vector>
using namespace std;
void subSet(int arr[], vector<int> ans, int size, int idx)
{
    if (idx==size)
 
    {
         //  cout << "SUBSETS ARE: ";
        for (int ele = 0; ele < ans.size(); ele++)
        {
            cout << ans[ele];
        }
        cout << endl;
        return;
    }

    subSet(arr, ans, size, idx + 1);
    ans.push_back(arr[idx]);
    subSet(arr, ans, size, idx + 1);
}
int main()
{
    int n;
    vector<int> v;
    cout << "ENTR THE NUMBER OF ELEMENT IN THE ARRAY :";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT IJN THE ARRAY :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subSet(arr, v, n, 0);
}