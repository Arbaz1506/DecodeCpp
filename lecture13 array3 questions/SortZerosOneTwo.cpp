#include <iostream>
using namespace std;
#include <vector>
void display(vector<int> &v2)
{
    cout << "THE ELEMENTS ENTERED ARE:-";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i];
    }
    cout << endl;
}
int sorting_012(vector<int> &v3)
{
    int noz=0;
    int noo=0;
    int nowt=0;
    for(int i=0;i<v3.size();i++)
    {
        if(v3[i]==0) noz++;
        else if(v3[i]==1)noo++;
        else nowt++;
    }
    for(int i=0;i<v3.size();i++)
    {
        if(i<noz)v3[i]=0;
        else if(i<noz+noo) v3[i]=1;
        else v3[i]=2;
    }
    display(v3);
}  

int main()
{
    vector<int> v;

    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE ENTERED:-";
    cin >> n;
    cout << "ENTER ELEMENTS:-";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    display(v);
    sorting_012(v);
}