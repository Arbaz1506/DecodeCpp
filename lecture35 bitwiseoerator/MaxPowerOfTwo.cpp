#include <iostream>
using namespace std;
int findMaxPowerOfTwo(int n)
{
    n = n | n >> 1;
    n = n | n >> 2;
    n = n | n >> 4;
    n = n | n >> 8;
    n = n | n >> 16;
    return (n + 1) >> 1;
}
int BrainAlgo(int x)
{
    int temp;
    while (x != 0)
    {
        temp = x;
        x = (x) & (x - 1);
    }
    return temp;
}
int main()
{
    int x;
    cout << "ENTER THE NUMBER: ";
    cin >> x;
    cout << BrainAlgo(x) << "\n";
    cout << findMaxPowerOfTwo(x);
}