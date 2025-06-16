#include <iostream>
using namespace std;
class Pokemon
{
public:
    string type;
    int attack;
    // Pokemon(string t, int a) // now this is working fine but if we put the variable name same as the class variables so the problems will occur
    // {
    //     type = t;
    //     attack = a;
    // }
    // Pokemon(string type, int attack) here the problem occurs iff we putt the same name to overcome the problem we will use pointers
    // {
    //     type = type;
    //     attack = attack;
    // }
    Pokemon(string type, int attack) // here we use thiss pointer to overcomethis problem
    {
        this->type = type;     // this type means that it is pointing the class variable
        this->attack = attack; // similarly this attactmeans it is pointing the class variable wala attack
    }
};
int main()
{
    Pokemon pikachu("electric ", 89);
    cout << pikachu.type << endl;
    cout << pikachu.attack << endl;
    Pokemon charlizard("fire", 76);
    cout << charlizard.type << endl;
    cout << charlizard.attack << endl;
}