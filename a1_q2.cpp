#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks you have got:"<<endl;
    cin>>marks;
    if (marks>90)
    cout<<"excellent"<<endl;
    else if(marks>80 && marks<=90)
    cout<<"good"<<endl;
    else if(marks>70 && marks<=80)
    cout<<"fair"<<endl;
    else if(marks>60 && marks<=70)
    cout<<"meets expectations"<<endl;
    else if(marks<=60)
    cout<<"below par"<<endl;
    
}
    
