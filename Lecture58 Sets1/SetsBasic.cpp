#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(5);
    s.insert(6);

    // To print set we will use for each loop
    for(int ele : s)
    {
        cout<<ele<<" ";
    }

    cout<<endl;
    // to find the size
    cout<<s.size();

    //to search the element
    int target = 7;
    cout<<endl;
    if(s.find(target)!= s.end() )
    {
        cout<<"Exists!";
    }
    else cout<<"Does Not Exists!"<<endl;
}