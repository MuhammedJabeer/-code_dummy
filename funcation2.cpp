#include <iostream>
using namespace std;
void myFunction(int,int);
int main()
          {
              int num1,num2;
              cout<<"enter two num";
              cin>>num1>>num2;
              myFunction(num1,num2);
  return 0;
}

void myFunction(int a,int b)
{
  int result;
  result=a+b;
  cout<<result;
}
