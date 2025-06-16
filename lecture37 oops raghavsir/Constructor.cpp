#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    Student()
    {
        name = "arbaz ";
        roll = 87;
        section = 'd';
    }
    Student(string k, int l, char m)
    {
        name = k;
        roll = l;
        section = m;
    }
};
int main()
{
    Student s;
    cout << s.name << endl;
    cout << s.roll << endl;
    cout << s.section << endl;

    Student s2("arbaz", 90, 's'); // data should be in order to pass in the constructor
    cout << s2.name << endl;
    cout << s2.roll << endl;
    cout << s2.section << endl;
}