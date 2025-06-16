#include <iostream>
using namespace std;
class Car
{
public:
    int averge;
    string name;
};
void change(Car *_New) // address type object paas kiye to pointer type object catch krega
// & ye lagane se bhii kaam hota but we will use pointers
{
    _New->name = "jaguar"; //-> basically means (*-new).name
}
int main()
{
    Car A;
    A.averge = 98;
    A.name = "B M W";
    cout << A.name << " " << A.averge << endl;
    change(&A); // pass by referece
    // agar address paas nahii krenge to paas by value hoga koyii changes nahii hoga
    cout << A.name << " " << A.averge;
}