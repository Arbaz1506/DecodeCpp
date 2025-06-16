#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {9, 2, 90, 8, 5};
    int *ptr = arr; // correct
    cout << ptr << endl;
    cout << &arr << " " << arr << endl; // sabb ek hi adress print krega kyunkii kaam sabka samme hii haii
    // using pointer we can modify the element of array
    ptr[1] = 878;
    // pointer k pass aukaat hota haii kii voo element fech krr sake
    cout << ptr[0] << endl;
    // even hmlog poore array ko bhii print krr sakte haii loop lagake simple
    for(int i=0;i<=4;i++)
    {
        cout << ptr[i] << " ";
    }
}