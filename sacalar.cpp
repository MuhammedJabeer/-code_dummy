#include<iostream>
using namespace std;
void symetric(int a[100][100],int n);
int main()
{
    int a[100][100];
    int i,j,n;
    cout<<"enter the array size";
    cin>>n;
    cout<<"enter the values";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    symetric(a,n);
    return 0;
}
void symetric(int a[100][100],int n)
{
    int i,j,multi;
    cout<<"enter the sacalar value";
    cin>>multi;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]*=multi;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" "<<a[i][j];

        }
        cout<<"\n";
    }

}