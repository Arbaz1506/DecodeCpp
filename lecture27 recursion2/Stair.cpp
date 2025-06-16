#include <iostream>
using namespace std;
int stairs(int n)
{
    if(n==2) return 2;
    if(n==1)return 1;
    return stairs(n-1)+stairs(n-2);
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF STAIRS: ";
    cin >> n;
    cout<<"NUMBER OF WAYS:"<<stairs(n);
}