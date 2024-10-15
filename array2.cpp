#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,n,searchkey,flag=0;
    cout<<"enter array value";
    cin>>n;
    cout<<"enter the values";
    for(i=0;i<n;i++)
    {cin>>a[i];}
    cout<<"enter the searchkey= ";
    cin>>searchkey;
    for(i=0;i<n;i++)
    {
        if(searchkey==a[i])
        {
            flag=1;
            break;
        }
    }
    
        if (flag==1)
        {
            cout<<"iteam founded="<<i+1;
        }
        
    
        else
        {
            cout<<"invalid value";
        }
        return 0;
    

}