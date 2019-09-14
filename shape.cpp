#include<iostream>
using namespace std;
class shape
{
	private:
		int length,breadth,side,radius;
	public:
		//shape(int length=1,int breadth=1,float side=1,double circle=1);		
		int area_rect(int length=1,int breadth=1)
		{
			return length*breadth;
		}
		float area_square(float side=1)
		{
			return side*side;
		}
		double area_circle(double radius=1)
		{
			return 3.14*radius*radius;
		}
};


	
int main()
{
shape s;
cout<<"Rectangle area:"<<s.area_rect()<<endl;
cout<<"Rectangle area:"<<s.area_rect(2,4)<<endl;
cout<<"Square area:"<<s.area_square()<<endl;
cout<<"Square area:"<<s.area_square(2)<<endl;
cout<<"Circle area:"<<s.area_circle()<<endl;
cout<<"Circle area:"<<s.area_circle(2)<<endl;
}
