#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cout<<"enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"the sum of first 10 natural numbers:""\n"<<sum;
  
    return 0;
}