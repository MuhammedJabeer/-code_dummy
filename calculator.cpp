#include<iostream>
using namespace std;
int main()
{
    int num1,num2,opera,result;
    bool running=true;
    while(running)
    {
        cout<<"\n chose operation \n1=addition \n2=subtraction \n3=multipication \n4=division \n5modules \n or 6 to stop\n";
        cin>>opera;
        if(opera==6)
        {
            running=false;
            continue;
        }
        cout<<"\n enter the values";
        cin>>num1>>num2;
        switch(opera)
        {
            case 1:
            result=num1+num2;
            cout<<"result="<<result;
            break;
            case 2:
            result=num1-num2;
            cout<<"result="<<result;
            break;
            case 3:
            result=num1*num2;
            cout<<"result="<<result;
            break;
            case 4:
            result=num1/num2;
            cout<<"result="<<result;
            break;
            case 5:
            result=num1%num2;
            cout<<"result="<<result;
            break;
            default:
            cout<<"invalid input";
            break;

        }
    }
    cout<<"end";
    return 0;
}