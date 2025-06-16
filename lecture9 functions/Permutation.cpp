#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)

    {
        fact *= i;
    }
    return fact;
}
int permutation(int n,int q)
{
    int npr= fact(n)/fact(q);
    return npr;
}

int main()
{
    int n;
    cout << "ENTER THE VALUE OF n: ";
    cin >> n;
    int r;
    cout << "ENTER THE VALUE OF r: ";
    cin >> r;
    int q = n - r;
    cout << "n-r: " << q<<endl;
    fact(n);
    cout << "factorial of n: " << fact(n) << endl;
    fact(r);
    cout << "factorial of r: " << fact(r) << endl;
    fact(q);
    cout << "factorial of n-r: " << fact(q) << endl;
    permutation(n,q);
    cout<<"permutation: "<<permutation(n,q);
}