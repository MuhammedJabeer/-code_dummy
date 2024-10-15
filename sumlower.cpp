#include<iostream>
using namespace std;
void sumoflower(int a[100][100],int n);
int main()
{
   int a[100][100];
    int i,j,n;
    cout<<"enter the  matix values";
    cin>>n;
    cout<<"enter the values";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cin>>a[i][j];}
    }
    sumoflower(a,n);
    return 0;
}
void sumoflower(int a[100][100],int n)
{
   
    int i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
           { 
            sum+=a[i][j];
           }
        }
    }


   cout<<sum;
}

