#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout<<"A is called"<<endl;
	}
};
class B:public A
{
public:
	B()
	{
		cout<<"B is called"<<endl;
	}
};
class C:public B
{
public:
	C()
	{
		cout<<"C is called"<<endl;
	}
};
int main()
{
	C obj;
	return 0;
}
