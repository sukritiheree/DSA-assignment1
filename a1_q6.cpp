#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"enter ur number";
    cin>>n;
    while (n>0)
    {
        n=n/10;
        c++;
    }
    cout<<"number of digits"<<c;
}
