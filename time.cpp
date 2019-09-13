#include<iostream>
using namespace std;

struct Time
{
	int hour;
	int minute;
	int second;
};

void printMilitary(const Time &);
//void printStandard(const Time &);

int main()
{
	Time dinnerTime;
	dinnerTime.hour=18;
	dinnerTime.minute=30;
	dinnerTime.second=15;

	cout<<"Dinner will be held at ";
	printMilitary(dinnerTime);
	cout<<"Military time,\n which is";
	

	dinnerTime.hour=29;
	dinnerTime.minute=73;

	cout<<"\nTime with invalid values:";
	printMilitary(dinnerTime);
	cout<<endl;
	return 0;
}
void printMilitary(const Time &t)
{
	cout<<(t.hour<10?"0":"")<<t.hour<<":"<<(t.minute<10?"0":"")<<t.minute;
}

