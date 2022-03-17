#include<iostream>
using namespace std;
main()
{
int ch,num1,num2,sum,sub,mul;
float div;
cout<<"Enter your choice \n";
cout<<"1.Adition \n2.Subtraction  \n3.Multiplication  \n4.Divission\n";
cin>>ch;
switch(ch){
case 1:cout<<"Enter the two numbers:";
cin>>num1>>num2;
sum=num1+num2;
cout<<"Adition is :"<<sum;
break;
case 2:cout<<"Enter the two numbers:";
cin>>num1>>num2;
sub=num1-num2;
cout<<"Subtraction is:"<<sub;
break;
case 3:cout<<"Enter the two numbers:";
cin>>num1>>num2;
mul=num1*num2;
cout<<"Multiplication is:"<<mul;
break;
case 4:cout<<"Enter the two numbers:";
cin>>num1>>num2;
div=num1/num2;
cout<<"Divission is:"<<div;
}

}
