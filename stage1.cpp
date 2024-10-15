#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter three numbers";
    cin>>num1>>num2>>num3;
    
        if(num1==num2&&num1==num3&&num2==num3)
        
      {  cout<<"the triangle is equilateral"<<endl;}
    else if(num1==num2||num1==num3||num2==num3)
    {
      cout<<"the triangle is isolater";
    }
    else
    {
        cout<<"the triangle is scalene";
        
    }
                
      
    return 0;
}
