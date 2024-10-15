#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int i,n;
    cout<<"enter the array value";
    cin>>n;
    cout<<"enter the values";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cout<<"entered values are";
    for(i=0;i<n;i++)
    {
    cout<<" "<<a[i];
    }

    return 0;

}