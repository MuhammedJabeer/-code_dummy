#include<iostream>
using namespace std;
int main()
{
   {
    int a[100][100];
    int i,j,n,sum=0;
    cout<<"enter array value=\n";
    cin>>n;
    cout<<"enter the values=\n";
    for(i=0;i<n;i++)
    
    {
        for(j=0;j<n;j++)
        {cin>>a[i][j];}
    }
    cout<<"matrix values=""\n";
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    
   { cout<<"  "<<a[i][j];}
    
    cout<<"\n";} 
    cout<<"diagonal=\n";
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(i==j)
             {
             cout<<" "<<a[i][j];
             
             sum+=a[i][j];
             
             }
         }
     }
        cout<<"\n"<<"sum=\n"<<sum;
return 0;

}
}