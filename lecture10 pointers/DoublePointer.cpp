#include<iostream>
using namespace std;
int main()
{
    int x;
    int *ptr=&x;//x ka adress stored
    int **ptr1=&ptr;//adress of ptr store karega 
    cout<<x<<" "<<&x<<endl;
    cout<<ptr<<" "<<ptr1;
}