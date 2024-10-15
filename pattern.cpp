#include<iostream>
using namespace std;
int main()
{
    int i,j,num=0;
    cout<<"enter a number";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*  ";
        }
        cout<<"\n";
    }
    return 0;
}
