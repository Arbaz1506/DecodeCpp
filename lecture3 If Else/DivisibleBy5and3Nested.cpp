#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number :";
    cin>>n;
    if(n%5==0)
    {
        if(n%3==0)
        {
            cout<<"YES NUMBER EXISTS";

        }
        else{
            cout<<"not exsits";

        }
    }

    else{
        cout<<"not exists";
        
    }
}
