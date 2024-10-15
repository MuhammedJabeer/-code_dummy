#include<iostream>
using namespace std;
int main()
{
    int flag;
    int i;
    int n;
    cout<<"enter a number:";
    cin>>n;
    flag=0;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0){    
         cout<<"prime number";
    }
    else{
        cout<<"not prime number";
    }
    return 0;

}