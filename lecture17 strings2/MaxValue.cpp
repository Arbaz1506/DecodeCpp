#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    string str[]= {"0123","0023","456","00182","940","2901"};
    
    int max=stoi(str[0]);
    for(int i=1;i<6;i++)
    {
        if(stoi(str[i])>max) max= stoi(str[i]);
    }
    cout<<max;

}