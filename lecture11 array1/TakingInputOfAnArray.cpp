#include <iostream>
using namespace std;
int main()
{
    // EK INPUT NORMAL TAREEKE SE CIN>>ARR[1],CIN>>ARR[2]  KARKE LO EK HAII KI LOOP LAGAOO
    
    int arr[6];
    cout << "ENTER THE ELEMENT OF ARRAY:-" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cin >> arr[i];
    }
    cout << "THE ELEMENTS ARE: ";
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
}