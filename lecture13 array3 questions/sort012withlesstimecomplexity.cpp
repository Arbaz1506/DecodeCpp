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
    int lo=0;
    int mid=0;
    int hi=v3.size()-1;
    while(mid<=hi)
    {
        if(v3[mid]==2)
        {
            
             int temp=v3[mid];
            v3[mid]=v3[hi];
            v3[hi]=temp;
            hi--;

        }
        else if(v3[mid]==0)
        {
           
            int temp=v3[mid];
            v3[mid]=v3[lo];
            v3[lo]=temp;
            lo++;
            mid++;

        }
       else
            mid++;


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