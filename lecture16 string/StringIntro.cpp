// string is a character array;
#include <iostream>
using namespace std;
int main()
{
    char str[] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }
    // main points to be notes here is that saare string k last me \0 present hota haii
    // jabb jabb string traverse hota haii to vo dekhega jaha bhi \0 aya waha se vo print karna khatam krr dega
    //harr string k last me \0 hota haii vo dikhta nahii hai but present hota haii hamare harr string  me 
    cout<<endl;
    cout<<str;//aise bhii string koo print kiya jaa skata haii but agar array koo print aise nahii krr sakte haii vo first element ka daddress de dega


}