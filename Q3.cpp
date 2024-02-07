#include<iostream>
using namespace std;
int main()
{
    int CP;
    cout<<"Enter Cost Price:";
    cin>>CP;
    int SP;
    cout<<"Enter Selling Price:";
    cin>>SP;
    int profit,loss;

    if(SP>CP){
        profit=SP-CP;
        cout<<"Profit:"<<profit;
    }
    else if(SP<CP){
        loss=CP-SP;
        cout<<"Loss:"<<loss;
    }
    else{
        cout<<"No Profit NO Loss";
    }
    return 0;
}