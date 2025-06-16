#include <iostream>
using namespace std;
int print(int n)
{
    if (n == 0)
        return ;
    cout<<n<<endl;
    print(n-1);
    
}
int main()
{
    int n;
    cout << "ENTER THE LAST DIGIT: ";
    cin >> n;
    print(n);
}