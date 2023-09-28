#include<iostream>
using namespace std;
int main(){
    int n,c,ch,i;
    do
    {
        cout<<"enter number";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if (n%i==0)
            c++;

        }
        if (c==2)
        { 
            cout<<"number is prime"<<endl;
            cout<<" do u wanna check for more numbers?(1 for yes 0 for no)"<<endl;
            cin>>ch;
        }
        else {
            cout<<"number is not prime";
            cout<<"do u wanna check for more numbers?(1 for yes 0 for no)";
            cin>>ch;
        }

     }
    
    while (ch==1);
    return 0; 

}
