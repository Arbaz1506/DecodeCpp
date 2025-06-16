#include <iostream>
using namespace std;
void text(int n)
{
    if (n == 0)
        return;
    cout << "GOOD MORNING :)" << endl;
    text(n - 1); // recursion occurs
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF TIMES TEXT HAS TO BE PRINTED :";
    cout<<endl;
    cin >> n;
    text(n);
}