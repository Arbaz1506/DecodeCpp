#include<iostream>
using namespace std;
void sum1toN(int sum,int n)
{
    if(n==0){
        cout<<sum;
        cout<<endl;
        return ;
    }
    sum1toN(sum+n,n-1);
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    int sum=0;
    sum1toN(sum,n);
}