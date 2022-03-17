#include<iostream>
using namespace std;
main()
{
int ch,num1,num2,sum,sub,mul;
float div;
cout<<"Enter your choice \n";
cout<<"1.Adition \n2.Subtraction  \n3.Multiplication  \n4.Divission\n";
cin>>ch;
cout<<"Enter the two numbers:";
cin>>num1>>num2;
switch(ch){
case 1:sum=num1+num2;
cout<<"Adition is :"<<sum;
break;
case 2:sub=num1-num2;
cout<<"Subtraction is:"<<sub;
break;
case 3:mul=num1*num2;
cout<<"Multiplication is:"<<mul;
break;
case 4:div=num1/num2;
cout<<"Divission is:"<<div;
}

}
