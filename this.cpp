#include<iostream>
#include<string.h>
using namespace std;

class AddString
{
public:	
	char str[100];

	AddString(){}
	AddString(char str[])
	{
		strcpy(this->str,str);
	}
	AddString operator+(AddString &s2)
	{
		AddString s3;
		strcat(this->str,s2.str);
		strcpy(s3.str,this->str);
		return s3;
	}
};

int main()
{
	char str1[]="Nisha ";
	char str2[]="Mathew";
	AddString a1(str1);
	AddString a2(str2);
	AddString a3;
	a3=a1+a2;
	cout<<"Concatenation: "<<a3.str<<endl;
}
