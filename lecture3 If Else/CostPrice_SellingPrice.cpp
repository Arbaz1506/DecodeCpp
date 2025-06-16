#include <iostream>
using namespace std;
int main()
{
    int CP, SP;
    cout << "enter the CostPrice=";
    cin >> CP;
    cout << "enter the SellingPrice=";
    cin >> SP;
    if (SP > CP)
    {
        cout << "PROFIT MADE" << endl;
        int profit_of = SP - CP;
        cout << "profit done of Rs=" << profit_of;
        
    }
    if(SP=CP)
    {
        cout<<"NO PROFIT NO LOSS"<<endl;
    }
    else{
        cout << "LOSS MADE" << endl;
    int loss_of = CP - SP;
    cout << "loss made of Rs=" << loss_of;}
}