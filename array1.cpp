#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int i,n,sum=0;
    cout<<"enter the array value";
    cin>>n;
    cout<<"enter the values";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"result is="<<sum;
     return 0;
    
 

}