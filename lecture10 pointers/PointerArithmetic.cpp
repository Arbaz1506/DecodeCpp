#include <iostream>
using namespace std;
int main()
{
    int a=9;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<++ptr<<endl;
    cout<<sizeof(*ptr);
}