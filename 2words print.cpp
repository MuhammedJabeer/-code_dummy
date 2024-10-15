#include<iostream>
using namespace std;
int main()
{
    string str1,str2;
    string str;
    cout<<"enter the first word:";
    cin>>str1;
    cout<<"enter the second word:";
    cin>>str2;
    str=str1+ " " +str2;
    cout<<"str is: "<<str;
    return 0;
}