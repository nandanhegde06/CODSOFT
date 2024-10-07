#include<iostream>
using namespace std;

int main()
{
double num1,num2;
char op;

cout<<"enter a operator";
cin>>op;
cout<<"numer enter";
cin>>num1>>num2;

switch (op)
{
case '+':
 cout<<num1<<op<<num2<<"="<<num1+num2<<endl;

    break;

case '-':
 cout<<num1<<op<<num2<<"="<<num1-num2<<endl;

    break;
case '*':
 cout<<num1<<op<<num2<<"="<<num1*num2<<endl;

    break;
case '/':
if (num2==0.0)
{
    cout<<"Divde by Zero situation"<<endl;
}
else
{
 cout<<num1<<op<<num2<<"="<<num1/num2<<endl;
}
    break;


default:
cout<<"not a recognized operator";
    break;
}
return(0);



}