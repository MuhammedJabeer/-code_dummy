#include<iostream>
using namespace std;
void transpose(int a[100][100],int n);
int main()
{
    int a[100][100];
    int i,j,n;
    cout<<"enter the array size=\n";
    cin>>n;
    cout<<"enter the values=\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];

        }

    }
    transpose(a,n);
    return 0;

}
void transpose(int a[100][100],int n)
{
    int i,j;
    cout<<"matrix values=\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" "<<a[i][j];
            }
        cout<<"\n";
    }

    cout<<"transpose values=\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<" "<<a[j][i];
        }
        cout<<"\n";
    }
    
}

