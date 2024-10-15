#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"enter the number";
    cin>>num;
    int space=num-1;
    for(i=1;i<=num;i++) 
    {
    for(j=1;j<=space;j++)
    cout<<" ";
    for(j=1;j<=(2*i-1);j++)
    cout<<"*";
    cout<<endl;
    space--;
    }
    space=1;
    for(i=1;i<=(num-1);i++)
    {
        for(j=1;j<=space;j++)
        cout<<" ";
        for(j=1;j<=(2*(num-i)-1);j++)
        cout<< "*";
        cout<<endl;
        space++;
    }
    return 0;
}