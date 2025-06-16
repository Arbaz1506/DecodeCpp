#include <iostream>
using namespace std;
#include <vector>
int main()
{

    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE ENTERED:";
    cin >> n;
    cout << endl;
    vector<int> v(n); // AGAR SIZE INITIALIZE NAHI KRTE HAII TO SEGMENTATION ERROR DIKHAYEGA
    cout << "ENTER THE ELEMENT OF VECTOR:";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "THE ELEMENTS OF VECTOR ARE:";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}