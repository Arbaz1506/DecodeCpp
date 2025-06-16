#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, vector<int> &brr, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr.size() && j < brr.size())
    {
        if (arr[i] > brr[j])
        {
            ans[k] = brr[j];
            k++;
            j++;
        }
        else
        {
            ans[k] = arr[i];
            k++;
            i++;
        }
    }
    if (i == arr.size())
    {
        while (j < brr.size())
        {
            ans[k] = brr[j];
            k++;
            j++;
        }
    }
    if (j == brr.size())
    {
        while (i < arr.size())
        {
            ans[k] = arr[i];
            k++;
            i++;
        }
    }
}
int main()
{
    int n, m;
    cout << "ENTER THE SIZE OF THE 1ST ARRAY: ";
    cin >> n;
    cout << "ENTER THE SIZE OF THE 2ND ARRAY: ";
    cin >> m;

    int arr1[n];
    int arr2[m];
    cout << "ENTER THE ELEMENT OF THE FIRST ARRAY :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "ENTER THE ELEMENT OF THE SECOND ARRAY :";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> a(arr1, arr1 + n);
    vector<int> b(arr2, arr2 + m);
    vector<int> reslt(n + m);
    merge(a, b, reslt);
    for (int i = 0; i < reslt.size(); i++)
    {
        cout << reslt[i] << " ";
    }
}