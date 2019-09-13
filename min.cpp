#include<iostream>
using namespace std;
int minimum(int,int,int);
int main()
{
int a,b,c;
cout<<"Enter 3 integers:";
cin>>a>>b>>c;
cout<<"Minimum is:"<<minimum(a,b,c)<<endl;
}
/*int minimum(int x,int y,int z)
{
if((x<y)&&(x<z))
	return x;
else if((y<x)&&(y<z))
	return y;
else
	return z;
}*/
int minimum(int x,int y,int z)
{
int min;
min=x<y?(x<z?x:z):(y<z?y:z);
return min;
}

/*int minimum(int x,int y,int z)
{
int min=x;
if(y<min)
min=y;
if(z<min)
min=z;
return min;
}*/
