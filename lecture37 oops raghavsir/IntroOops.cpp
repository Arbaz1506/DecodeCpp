#include <iostream>
using namespace std;
class student // user deffined data type
{
public:
    string name;
    int roll_number;
    char section;
};
int main()
{
    student one;        // declaration
    one.name = "arbaz"; // initialisation
    one.roll_number = 14;
    one.section = 'A';
    student two;
    two.name = "salam";
    two.roll_number = 76;
    two.section = 'o';
    cout << one.name << endl;
    cout << two.name << endl;
    student three = two; // now this means ki three naam ka 3 dabba bana usme two ki saari cheezein aa gyi also known as deep copy
    cout << three.name << endl;
    student four = {"sadaf ", 78, 'i'}; // we can declare like thiss but the problem is ki line wise saara dena hoga so this must be avoided
    cout << four.name << endl;
    four.name = "himanshu";
    cout << four.name << endl;
}