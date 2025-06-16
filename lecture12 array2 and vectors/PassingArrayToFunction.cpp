#include <iostream>
using namespace std;
int disp(int a[])

{
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i] << endl;
    }
}
int change(int array[])
{
    array[0] = 989;
    cout<<"CHNAGED ARRAY"<<endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << array[i] << endl;
    }
}
int main()
{
    int arr[5] = {1, 3, 5, 56, 2};
    disp(arr);
    change(arr);
    cout<<endl; // arr mean address pass karr rhe haii hmlog array1 ka memory alloctaion folder me detail me banaye hai
    disp(arr);
}
// we got to know tthat array adress k thorugh pass hota haii