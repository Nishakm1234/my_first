#include<iostream>
using namespace std;
class Point
{
private:
	int x,y;
public:
	Point(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	//Copy constructor
	Point(const Point &p)
	{
		x=p.x;
		y=p.y;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};
int main()
{
	Point p1(10,15);
	Point p2=p1;
	Point p3=p1;
	cout<<"p1.x="<<p1.getX()<<",p1.y="<<p1.getY()<<endl;
	cout << "p2.x =" << p2.getX() << ",p2.y ="<< p2.getY()<<endl; 
	cout << "p3.x =" << p3.getX() << ",p3.y ="<< p3.getY()<<endl; 
}
