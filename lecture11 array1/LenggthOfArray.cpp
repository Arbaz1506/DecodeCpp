
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 30, 2, 13, 42, 73, 53, 4, 57, 3, 1, 3, 34, 5, 6, 74, 4};
    int size = sizeof(arr) / sizeof(arr[1]);
    cout << "number of element in the array is:-" << size;
}