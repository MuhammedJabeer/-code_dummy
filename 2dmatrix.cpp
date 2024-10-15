#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    cout<<"enter  1st matrix array";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {cin>>a[i][j];}
    }
    cout<<"enter 2nd matrix array";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {cin>>b[i][j];}
    }
    cout<<"multipication";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }

    }
    {
        for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
          cout<<c[i][j]<<"\t";
          cout<<"\n";
        }
    }

}