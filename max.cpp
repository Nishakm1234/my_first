#include<iostream>
using namespace std;
int maximum(int,int,int);
int main()
{
int a,b,c;
cout<<"Enter 3 integers:";
cin>>a>>b>>c;
cout<<"Maximum is:"<<maximum(a,b,c)<<endl;
}
/*int maximum(int x,int y,int z)
{
if((x>y)&&(x>z))
	return x;
else if((y>x)&&(y>z))
	return y;
else
	return z;
}*/
/*int maximum(int x,int y,int z)
{
int max;
max=x>y?(x>z?x:z):(y>z?y:z);
return max;
}*/

int maximum(int x,int y,int z)
{
int max=x;
if(y>max)
max=y;
if(z>max)
max=z;
return max;
}
