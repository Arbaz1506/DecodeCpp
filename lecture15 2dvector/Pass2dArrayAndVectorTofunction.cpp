#include <iostream>
using namespace std;
void changearray(int a[]) // yaha hmlog size nahii de rhe hai
{
    a[0] = 100;
}
void change2D(int b[][3]) // jaise 1Darray me hmlog function me  array ka size khalii chhod de rhe the but 2Darray me nahii chhod sakte waha size dena hii hoga
{
    b[1][0] = 99;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    changearray(arr);
    cout << arr[0] << endl;
    // here hmlog dekh sakte haii ki array pass kiye aur function me size  dene ka zaroorat bhii nahii hua aur result hmlog dekh paa rhe haii
    // but 2d me aisa nahii ho sakta haii
    int arrr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arrr[1][0] << endl;
    change2D(arrr);
    cout << arrr[1][0];
}