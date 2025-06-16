#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE LENGTH OF ARRAY: ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENT OF THE ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int ele : arr) // for each loop
    {
        cout << ele << " ";
    }
    cout << endl;
    // selection sort starts here
    for (int i = 0; i < n - 1; i++) // why n-1 coz lastt row to already sort ho chuka hoga na !
    {
        int min = INT_MAX;
        int mindex = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindex = j;
            }
        }
        // now swapping the minimun index from the very first element+
        int temp;
        temp = arr[i];
        arr[i] = arr[mindex];
        arr[mindex] = temp;
    }
    cout << "SORTED ELEMENT: ";
    for (int ele : arr) // for each loop
    {
        cout << ele << " ";
    }
    //DIKHNE ME LAGGG RHA KII ISK TIME COMPLEXITY ACHHA HAII 
    // BUT NAHII BUBBLE SORT ISSE BETTER HAII 
    // AUR STABILITY OF SORTING BHII KHARAB HAII THODA
    // use cases:-
    // 1.) it is used where h=we have to sort like 1st kth elements to asaani hoti hai 
    // 2.) it is use to sort array of small size
}