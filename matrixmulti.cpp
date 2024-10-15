#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,k;
    cout<<"enter array values";
    cin>>m>>n;
    int a[m][n],b[m][n],c[m][n];
    cout<<"first matrix array";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {cin>>a[i][j];}
    }
    cout<<"enter second matrix array";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {cin>>b[i][j];}
    }
    cout<<"matrix multipication\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        c[i][j]=0;
            for(k=0;k<m;k++)
            {c[i][j]+=a[i][k]*b[k][j];}       }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    
    cout<<c[i][j]<<"\t"; 
    cout<<"\n";
    }
    return 0;
}
    
