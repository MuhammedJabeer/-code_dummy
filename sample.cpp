#include<iostream>
using namespace std;
void sum(int num1, int num2);
int main()
{
    int num1,num2;
    cout<<"enter two numbers";
    cin>>num1>>num2;
    sum(num1,num2);
    return 0;

}
void sum( int a, int b)
{
    int sum,multi;
    sum=a+b;
    multi=a*b;
    cout<<"the sum="<<sum<<"\n"<<"the multipication="<<multi;

}