#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,j,n,temp;
    cout<<"enter the array values";
    cin>>n;
    cout<<"enter the values";
    for (i=0;i<n;i++)
    {cin>>a[i];}
    {
        for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
        cout<<"sorted values";
        for(i=0;i<n;i++)
        cout<<"  "<<a[i];
    
    }
    
}