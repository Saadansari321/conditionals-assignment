#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter Length:";
    cin>>length;
    int breadth;
    cout<<"Enter Breadth:";
    cin>>breadth;

    if(length==breadth){
        cout<<"Square"<<endl;
    }
    else{
        cout<<"Rectangle"<<endl;
    }
    return 0;
}