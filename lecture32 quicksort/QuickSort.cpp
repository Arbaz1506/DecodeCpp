#include <iostream>

using namespace std;
int partition(int arr[], int startIdx, int endingIdx)
{
    int pivotElement = arr[startIdx];
    int count = 0;
    for (int i = startIdx + 1; i < endingIdx; i++)
    {
        if (arr[i] <= pivotElement)
            count++;
    }
    int pivotIdx = count + startIdx;
    swap(arr[startIdx], arr[pivotIdx]);
    int i = startIdx;
    int j = endingIdx;
    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotElement)
            i++;
        if (arr[j] > pivotElement)
            j--;

        else if (arr[i] > pivotElement && arr[j] <= pivotElement)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[], int startIdx, int endingIdx)
{
    if (startIdx >= endingIdx)
        return;
    int pivotIdx = partition(arr, startIdx, endingIdx);
    quickSort(arr, startIdx, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, endingIdx);
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER ELEMENT TO BE ENTERED: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT OF THE ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "SORTED ELEMENT: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}