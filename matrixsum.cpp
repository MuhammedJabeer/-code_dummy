#include<iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100];
    int i,j,n,sum=0;
    cout<<"enter the array values";
    cin>>n;
    cout<<"enter array row ";
    for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {cin>>a[i][j];}
      }
      cout<<"enter array coloum";
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {cin>>b[i][j];}
     }
     cout<<"result is =\n";
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
       cout<<a[i] [j]+b[i] [j];
       cout<<"  \n";
      
        

     }
    return 0;

    

}