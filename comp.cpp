#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the two numbers and I will tell u the relationships tey satisfy:";
	cin>>num1>>num2;
	if(num1==num2)
		cout<<num1<<" is equal to "<<num2<<endl;
	if(num1!=num2)
		cout<<num1<<" is not equal to "<<num2<<endl;
	if(num1<num2)
		cout<<num1<<" is less than "<<num2<<endl;
	if(num1>num2)
		cout<<num1<<" is greater than "<<num2<<endl;
	if(num1<=num2)
		cout<<num1<<" is less than or equal to "<<num2<<endl;
	if(num1>=num2)
		cout<<num1<<" is greater than or equal to "<<num2<<endl;
}
