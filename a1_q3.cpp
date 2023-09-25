#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,t,num;
    int ctr=0;
    cout<<"how many numbers do u want to check";
    cin>>t;
    for(i=1;i<=t;i++)
    {cout<<"enter the number:";
    cin>>num<<endl;
    for(int a=1;a<=num;a++)
    if(num%a==0)
    {
        ctr++;
    }
    if(ctr==2)
    {
        cout<<"number is prime"<<endl;}
    else
    {cout<<"number is prime";}
    }

}
