#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> &q)
{
    cout<<"Displaying Queue"<<endl;
    for (int i = 0; i < q.size(); i++)
    {

        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.front();
    cout << endl;
    cout << q.back();
    q.pop(); // ek element front ye udd jayega
    cout << endl;
    cout << q.front();
    display(q);
}