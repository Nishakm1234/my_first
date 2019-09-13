#include<iostream>
using namespace std;
int i=0;
class print
{
	public:
		print()
		{
			i++;
			cout<<i<<endl;
		}
};

int main()
{
	print s[100];
	return 0;
}
