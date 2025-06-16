#include <iostream>
using namespace std;
int main()
{

    int a;
    int b;
    int *p = &a;
    int *p2 = &b;
    cout<<"ENTER THE FIRST  NUMBER: ";

    cin >> *p;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> *p2;
    cout << *p + *p2;
    //we can also take the input using pointers ya direct value bhii associate karr sakte hauu  
    
}