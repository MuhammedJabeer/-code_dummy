#include<iostream>
using namespace std;
void myfun();
int main()
{
    myfun();
   return 0;
}
void myfun()
{
    int i,n,multi=1;
    cout<<"enter the number";
    cin>>n;
    if(n<0)
    {
        cout<<"the number is neagative";
    }
    else{
        for(i=1;i<=n;i++)
        {
           multi*=i;
        }
        cout<<multi;
    }
    
}