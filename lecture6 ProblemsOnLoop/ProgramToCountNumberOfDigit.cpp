 #include<iostream>
 using namespace std;
 int main()
 {
    int num;
    int count=0;
    cout<<"ENTER THE NUMBBER: ";
    cin>>num;
    int a=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    if(a==0)
    {
        cout<<"NUMBER OF DIGIT IS: 1";
    }
    else
    cout<<"NUMBER OF DIGIT IS: "<<count;
 }
