#include<iostream>
using namespace std;
class Player
{
private:
	int runs;
	int wickets;
public:
	Player(int r,int w)
	{
		runs=r;
		wickets=w;
	}
	Player(const Player &p,int w=0)
	{
		runs=p.runs;
		wickets=w;
	}
		
	int getRuns()
	{
		return runs;
	}

	int getWickets()
	{
		return wickets;
	}
};
int main()
{
	Player p1(100,2);
	Player p2=p1;
	cout<<"p1.runs="<<p1.getRuns()<<",p1.wickets="<<p1.getWickets()<<endl;
	cout << "p2.runs =" << p2.getRuns() << ",p2.wickets ="<< p2.getWickets()<<endl;
}
