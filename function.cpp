#include <iostream>
using namespace std;
void myFunction();
int main()
          {
 myFunction();
 myFunction();
  return 0;
}

void myFunction() {
    int num1,num2,sum=0;
    cout<<"two numbers";
    cin>>num1>>num2;
  sum=num1+num2;
  cout<<"sum\n"<<sum<<"\n";
}
