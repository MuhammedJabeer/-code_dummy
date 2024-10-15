#include<iostream>
using namespace std;
int main()
{
    int num1,num2,choice,result;
    cout<<"enter the values";
    cin>>num1>>num2;
    cout<<"1 for addition \n2 for subtraction \n3 for multipication \n4 for division \n5 for modules \n enter your choice";
    cin>>choice;

    if(choice==1)
    {
        result=num1+num2;
        cout<<"result is="<<result;
    }
    else if(choice==2)
    {
        result=num1-num2;
        cout<<"result is="<<result;
    }
    else if(choice==3)
    {
        result=num1*num2;
        cout<<"result is="<<result;
    }
    else if(choice==4)
    {
        result=num1/num2;
        cout<<"result is="<<result;
    }
    else if(choice==5)
    {
        result=num1*num2;
        cout<<"result is="<<result;
    }
    else 
    {
        cout<<"wrong option";
            }
             while(result=10)
            
            return 0;

    
    




}