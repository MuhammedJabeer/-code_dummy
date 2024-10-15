#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the natural numbers:""\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
     cout<<"\n""result="<<sum;
     return 0;

}