#include<iostream>
using namespace std;
int main()
{
    int n;
    int c=1;
    cout<<"NO OF ROWS: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
             c++;
        }
        cout<<endl;
       
    }
}