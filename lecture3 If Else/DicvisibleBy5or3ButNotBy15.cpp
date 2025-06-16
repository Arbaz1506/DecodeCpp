#include<iostream>
using namespace std;
int main()
/*{
    int n;
    cout<<"ENTER A NUMBER TO CHECK:";
    cin>>n;
    if ((n%3==0 || n%5==0) && n%15!=0)
    {
        cout<<"number exist";
        cout<<endl;
    }
    else{
        cout<<"not exists";
    }
}*/
// WAY TWO
{

int n;
cout<<"enter a number to be checked";
cin>>n;
if(n%3==0||n%5==0)
{
    if(n%15!=0)
    {
        cout<<"NUMBER EXISTS";
        cout<<endl;
    }
    else
    {
        cout<<"not exists";
        cout<<endl;
    }
}
else{
    cout<<"number does not exists";
}

}