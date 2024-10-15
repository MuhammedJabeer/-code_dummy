#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    int i,j,n;
    cout<<"enter array value";
    cin>>n;
    cout<<"enter the values";
    for(i=0;i<n;i++)
    
    {
        for(j=0;j<n;j++)
        {cin>>a[i][j];}
    }
    cout<<"resul is=""\n";
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    
    cout<<"  "<<a[i][j];
    
    cout<<"\n";}  

return 0;


}