#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Marks:";
    cin>>marks;
    
    if(marks>=90){
        cout<<"Your Grade Is A+";
    }
    else if(marks>=80){
        cout<<"Your Grade Is A";
    }
    else if(marks>=70){
        cout<<"Your Grade Is B+";
    }
    else if(marks>=60){
        cout<<"Your Grade Is B";
    }
    else if(marks>=50){
        cout<<"Your Grade Is C";
    }
    else if(marks>=40){
        cout<<"Your Grade Is D";
    }
    else if(marks>=30){
        cout<<"Your Grade Is E";
    }
    else if(marks<30){
        cout<<"Your Grade Is F";
    }
    else{
        cout<<"!Enter Valid Marks";
    }


    return 0;
}