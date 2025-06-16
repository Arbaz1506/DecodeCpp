#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number=";
    cin>>num;
    if(num%5==0 && num%3==0)
    {
        cout<<"DIVISIBLE BY 3 AND 5"<<endl;

    }
    else 
    cout<<"NOT DIVISIBLE BY 3 AND 5";
}