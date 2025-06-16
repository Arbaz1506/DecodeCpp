#include<map>
#include<iostream>
using namespace std;

int main()
{
    map<int, int> m;
    m[1]=30;
    m[2]=40;
    m[9]=88;
    m[3]=50;


// Even Ordered map sorts the key and prints

    for(auto ele: m)
    {
        cout<<ele.first<<"  "<<ele.second<<endl;
    }
}
