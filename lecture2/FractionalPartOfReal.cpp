#include<iostream>
using namespace std;
int main()
{
    float x;
    cout<<"enter the value of x ";
    cin>>x;
    int y = (int)x;
    x = -y + x;
    cout<<x;

}