#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 4, 2, 3, 0};

    cout << &arr << endl; // poore array ka adress kya hoga?vo uske first element ka 1st byte ka adress hi hoga
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    // saabka address same hi print hoga i mean 4 bytes aage hoke  becoz memory allocation same hota haaiii
}