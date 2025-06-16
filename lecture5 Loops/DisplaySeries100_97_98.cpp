#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    for(int i=n;i>=0;i-=3)
    {
        cout<<i<<" ";
    }
}