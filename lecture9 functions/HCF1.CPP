#include<iostream>
using namespace std;
int HCF(int x,int y)

{
int hcf=1;
for(int i=1;i<=min(x,y);i++)
{
    if(x%i==0&& y%i==0)
    {
        hcf=i;
    }

}
return hcf;
}
int main()
{
    int a;
    int b;
    cout<<"ENTER THE 1ST NUMBER : ";
    cin>>a;
     cout<<"ENTER THE 2ND NUMBER : ";
    cin>>b;
    cout<<HCF(a,b);


}