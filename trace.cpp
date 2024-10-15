#include<iostream>
using namespace std;
void trace(int a[100][100],int n);
int main()
{
    int a[100][100];
    int i,j,n;
    cout<<"enter array value";
    cin>>n;
    cout<<"enter matrix value";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    trace(a,n);
    return  0;

}
void trace(int a[100][100],int n)
{
    int i,j,sum=0;
    cout<<"the matrix values is=\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"trace of digonal=";
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
         if(i==j)
         {
            sum+=a[i][j];
         }
       }
    }
    cout<<sum;
}