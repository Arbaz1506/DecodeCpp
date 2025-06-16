#include <iostream>
using namespace std;
int funct(int x, int y)

{
    cout << "adress of func x:" << &x << endl;
    cout << "adress of func y:" << &y << endl;
}
int main()
{
    int x = 9;
    int y = 8;
    cout << "adress of main x:" << &x << endl;
    cout << "adress of main y:" << &y << endl;
    funct(x, y);
}