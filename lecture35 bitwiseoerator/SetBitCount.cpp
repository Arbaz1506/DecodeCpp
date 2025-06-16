#include <iostream>
using namespace std;
int setBits(int n) // inbuilt approach
{
    return __builtin_popcount(n);
}
int setBitsmanual(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num = num & num - 1;
    }
    return count;
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    cout << setBits(n) << "\n"; // set bit means the number of one in a binary number
    cout << setBitsmanual(n);
}