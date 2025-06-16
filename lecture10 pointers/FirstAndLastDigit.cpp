#include <iostream>
using namespace std;
void find(int n, int *ptr, int *ptr1)
{
    * ptr1 = n % 10;
    while (n > 9)
    {
        n = n / 10;
    }
    *ptr=n;
    return ;
  
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER : ";
    cin >> n;
    int firstdigit, lastdigit;
    int *ptr = &firstdigit;
    int *ptr1 = &lastdigit;
    find(n, ptr, ptr1);
    cout<<"first digit: "<<firstdigit<<endl;
    cout<<"last digit: "<<lastdigit;
}