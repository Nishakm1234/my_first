#include<iostream>
using namespace std;
class Employee
{
	public:
		Employee();
		get_details();
		calculate_ctc();
		calculate_salary();
	private:
		char name[20];
		char emp_no[5];
		int salary;
		int hra;
		int da;
		int net_sal;
};

Employee::Employee()
{
name="Vijay";
emp_no="00000";
salary=0;
}
void Employee :: get_details()
{
	
	cout<<"\nEnter employee name:\n";
	cin>>name;
	cout<<"\nEnter employee number:\n";
	cin>>emp_no;
	cout<<"\nEnter employee basic:\n";
	cin>>emp_basic;
}

void Employee::calculate_salary()
{
	hra=0.3*salary;
	da=0.7*salary;
	net_sal=salary+da+hra;
}
int main()
{
	Employee e;


