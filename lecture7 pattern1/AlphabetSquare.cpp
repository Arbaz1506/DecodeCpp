#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"number of rows: ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        char m= 'A';
        for(int j=1;j<=n;j++)
        {
            cout<<m<<" ";
            m+=1;
        }
        cout<< endl;
    }
   
}