#include<iostream>
using namespace std;
int main()
{
    char chr;
    cout<<"ENTER AN ALPHABET:";
    cin>>chr;
    int ch = (int)chr;
    
    if(ch==65||ch==69||ch==73||ch==79||ch==85)
    {
        cout<<"UPPER CASE VOWEL";
        cout<<endl;
    }
    else if(ch==97||ch==101||ch==105||ch==111||ch==117)
    {
        cout<<"lOWER CASE VOWEL";
        cout<<endl;

    }
    else{
        cout<<"CONSONANT";
    }

}