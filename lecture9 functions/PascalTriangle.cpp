#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
       
    }
     return fact;
}
int combination(int i, int j)
{
    int comb = fact(i) / (fact(j) * fact(i - j));
    return comb;
}

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ROWS : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
       
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}