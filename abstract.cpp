#include<iostream>
using namespace std;
class Base
{
	int x;
public:
	virtual void fun()=0;
	int getx()
	{
		return x;
	}
};
class Derived:public Base
{
	int y;
public:
	void fun()
	{
		cout<<"fun() called"<<endl;
	}
};
int main(void)
{
	//Derived d;
	//d.fun();
	//Base b;
	//b.fun();
	Base *bp=new Derived();
	bp->fun();
	return 0;
}
