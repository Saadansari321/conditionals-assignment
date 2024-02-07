#include<iostream>
using namespace std;
int main()
{
    int integer;
    cout<<"Enter An Integer: ";
    cin>>integer;

    if(integer>0){
        cout<<"You Have Enter An Positive Integer: "<<integer<<endl;
    }
    else{
        cout<<"This Number Is Negative And Skipped";
    }
    
    return 0;

}