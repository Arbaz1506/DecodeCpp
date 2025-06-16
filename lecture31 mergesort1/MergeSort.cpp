#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &v, vector<int> &v2, vector<int> &ans)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < v.size() && j < v2.size())
    {
        if (v[i] > v2[j])
        {
            ans[k] = v2[j];
            k++;
            j++;
        }
        else
        {
            ans[k] = v[i];
            k++;
            i++;
        }
    }
    
    if (i == v.size())

    {
        while (j < v2.size())
        {
            ans[k] = v2[j];
            k++;
            j++;
        }
    }
    if (j == v2.size())
    {
        while (i < v.size())
        {
            ans[k] = v[i];
            k++;
            i++;
        }
    }
}
void mergeSort(vector<int> &v)
{

    int n = v.size();
    if (n <= 1)
        return;//1 2 3 8 4 6
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a1(n1);
    vector<int> a2(n2);
    for (int i = 0; i < n1; i++)
    {
        a1[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = v[i + n1];
    }
    mergeSort(a1);
    mergeSort(a2);
    merge(a1, a2, v);
}
int main()
{
    int n;
    cout << "ENTER THE SIZE OF ARRAY: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> a(arr, arr + n);

    mergeSort(a);
    cout << "SORTED ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}