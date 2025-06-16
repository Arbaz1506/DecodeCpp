
#include <iostream>
using namespace std;
int main()
{
    
    int n;
    int fact=1;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
          cout << i<<"! =" << fact<<endl;
    }
  
}