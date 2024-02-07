#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter Number:";
    cin>>x;

    if(x<0){
        x=x*(-1);
        cout<<"Absolute Value:"<<x<<endl;
    }
    else{
        cout<<"Absolute Value:"<<x;
    }

    return 0;
}