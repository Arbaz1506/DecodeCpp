#include <iostream>
using namespace std;
int HCF(int a, int b)
{
    if (a == 0)
        return b;
    else
        HCF(b % a, a);
}
int main()
{
    int a, b;
    cout << "ENTER TWO NUMBER :";
    cin >> a >> b;
    cout <<"HCF is:"<< HCF(a, b);
}