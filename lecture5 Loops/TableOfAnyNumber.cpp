#include <iostream>
using namespace std;
int main()
{
    int i, n, m;
    cout << "ENTER THE NUMBER WHOSE TABLE YOU WANT:";
    cin >> m;
    cout << "ENTER THE NUMBER FROM WHERE THE TABLE SHOULD START:";
    cin >> i;
    cout<< "ENTER THE NUMBER TILL WHERE YOU WANT TABLE:";
    cin >> n;
    for(i;i<=n;i++)
    {
        int sum = m*i;
        cout<<m <<"X"<< i<< "=" <<sum<<endl;
    }
}
