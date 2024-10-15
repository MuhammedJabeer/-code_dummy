#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"enter a number 1 to 5:";
    cin>>week;
    switch(week)
    {
        week1:
        cout<<"monday:";
        break;
        week2:
        cout<<"tuesday:";
        break;
        week3:
        cout<<"wednesday:";
        break;
        week4:
        cout<<"tursday:";
        break;
        week5:
         cout<<"friday:";
        default:
        cout<<"invalide number:";
        break;
    }

    return 0;    
}