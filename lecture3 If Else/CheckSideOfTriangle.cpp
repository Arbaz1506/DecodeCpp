#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "ENTER THE SIDE 1:";
    cin >> a;
    cout << "ENTER THE SIDE 2:";
    cin >> b;
    cout << "ENTER THE SIDE 3:";
    cin >> c;
    if(a<b+c)
    {
        cout<<"SIDES OF TRIANGLE";
    }
    else if(b<c+a)
    {
        cout<<"SIDES OF TRIANGLE";
    }
    else if(c<b+a)
    {
        cout<<"SIDES OF TRIANGLE";
    }
    else{
        cout<<"NOT SIDES OF TRIANGLE";
    }
}
