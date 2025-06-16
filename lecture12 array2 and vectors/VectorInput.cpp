#include <iostream>
using namespace std;
#include <vector>
//BY THIS METHOD WE CAN ADD ELEMENT WITHOUT GIVING THE SIZE OF VECTOR  
int main()
{
    vector<int> v;
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENT TO BE ENTERED: ";
    cin>>n;
    cout << "ENTER THE ELEMENT" << endl;
    

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "THE ELEMENTS ARE: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}