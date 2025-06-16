// 1-2+3-4+5-6....n
#include <iostream>
using namespace std;
int main()
{
    int odd_sum = 0;
    int even_sum = 0;
    int n;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            even_sum += i;
        else
            odd_sum += i;
    }
    cout << "SUM OF SERIES: " << (odd_sum) - (even_sum);
}