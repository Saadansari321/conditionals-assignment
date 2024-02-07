#include<iostream>
using namespace std;
int main()
{
    char op;
    float num1,num2;
    cout<<"num1,op&num2:"<<endl;
    cin>>num1>>op>>num2;

    switch(op){
        case '+':
        cout<<"="<<num1+num2<<endl;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        break;

        default:
        cout<<"! Invalid Operator"<<endl;
    }

    return 0;
}