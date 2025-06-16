#include <iostream>
using namespace std;
class car
{
private:
    string type;

public:
    string name;
    void set(string t)
    {
        type = t;
    }
    string get()
    {
        return type;
    }
};
int main()
{
    car a;
    a.name = "maruti";
    cout<<a.name <<endl;
    a.set("sedan");
    cout << a.get();
}