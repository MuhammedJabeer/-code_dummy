#include<iostream>
using namespace std;
void display(int a[][3],int size);
int main()
{
    int a[3][3];
    int i,j;
    cout<<"enter matrix values";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
      { 
          cin>>a[i][j];
          
      }
    }
    display(a,3);
    return 0;
}
void display(int a[][3],int size)
{
    cout<<"matrix values""\n";
    int k,m;
    for(k=0;k<size;k++)
    {
        for(m=0;m<size;m++)
      {
        cout<<a[k][m]<<" ";
      }
      cout<<endl;
    }
}