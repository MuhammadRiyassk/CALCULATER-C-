
#include<iostream>
using namespace std;
main()
{
int num1,num2,sum,sub,mul,ch;
float div;
cout<<"Enter your choice"<<endl;
cout<<"1.Addition \n2.Subtraction \n3.Multiplication \n4.Division"<<endl;
cin>>ch;
cout<<"Enter two numbers :"<<endl;
cin>>num1>>num2;
switch(ch)
{
case 1:sum=num1+num2;
cout<<"Addition is :"<<sum<<endl;
break;
case 2:sub=num1-num2;
cout<<"Subtraction is :"<<sub<<endl;
break;
case 3:mul=num1*num2;
cout<<"Multiplication is :"<<mul<<endl;
break;
case 4:div=num1/num2;
cout<<"Division is :"<<div<<endl;
break;
   }
}
