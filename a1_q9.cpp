#include<iostream>
using namespace std;
int main(){
    
    int num1,num2,i,j,gcd,lcm;
    cout<<"enter number 1";
    cin>>num1;
    cout<<"enter number 2";
    cin>>num2;
    
    if (num1>num2)
    {
      num2=i;
    }
   else if (num2>num1)
   {
      num1=i;
   }
   
   for(j=i;j>1;j--)
   {
      if (num1%j==0 && num2%j==0)
      cout<<"gcd:"<<j<<endl;
      gcd=j;
      lcm=(num1*num2)/gcd;
      cout<<"lcm:"<<lcm<<endl;
      break;
      
      }
      return 0;
}
   
