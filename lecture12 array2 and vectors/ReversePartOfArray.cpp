#include <iostream>
using namespace std;
#include <vector>
int display(vector<int> &v1)
{
    cout << "THE ELEMENTS ARE:-";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
}
int reverse(vector<int> &v2)
{
    int start_index, end_index;
    cout << "ENTER THE VALUE OF STARTING INDEX:-";
    cin >> start_index;
    cout << "ENTER THE VALUE OF ENDING INDEX:-";
    cin >> end_index;
    while (start_index <= end_index)
    {
        int temp = v2[start_index];
        v2[start_index] = v2[end_index];
        v2[end_index] = temp;
        start_index++;
        end_index--;
    }
    cout << "AFTER REVERSEING THE GIVEN PARTS ";
    display(v2);
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER OF ELEMENT TO BE INSERTED:-";
    cin >> n;
    cout << "ENTER THE ELEMETS:-";
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    display(v);
    cout << endl;
    reverse(v);
}