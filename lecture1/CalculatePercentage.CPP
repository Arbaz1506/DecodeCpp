#include <iostream>
using namespace std;
int main()
{
    float physics = 98;
    cout << "physics=" << physics << endl;
    float PhE = 95;
    cout << "PhE=" << PhE << endl;
    float Chemistry = 90;
    cout << "chemistry=" << Chemistry << endl;
    float maths = 91;
    cout << "maths=" << maths << endl;
    float english = 84;
    cout << "english" << english << endl;
    float sum = maths + english + Chemistry + physics + PhE;
    cout << endl;
    cout << "sum=" << sum;
    cout<<endl;
    float percentage;
    percentage = sum / 5;
    cout << "percentage=" << percentage<<"%";
}