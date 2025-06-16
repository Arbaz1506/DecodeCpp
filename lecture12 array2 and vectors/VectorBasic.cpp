#include <iostream>
using namespace std;
#include <vector>
int main()
{
    // vector is a dynamic array
    vector<int> v; // you needd not to mention the size of the vector
    // this is inserting element to the array , do not use sqaure bracket
    v.push_back(6);
    v.push_back(58);
    v.push_back(41);
    v.push_back(9);
    v.push_back(2);
    v.push_back(10);
    //update ya access krne k liye sqaure bracket use kr sakte haii example
    //but initialize krnne k liye nahii use krenge 
    v[0]=987;
    cout << v[0];
    cout << v[1];
    cout << v[2];
    cout << v[3];
    cout << v[4];
    cout << v[5];
    cout<<endl<<v.size();//v.size tells the number of elements
    cout<<endl<<v.capacity();//extra ellement dalenge to size double krr deta haiye

}