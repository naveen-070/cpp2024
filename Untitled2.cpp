#include<iostream>
using namespace std;
class time
{
	int hours;
	int mins;
	public
	{
		time(int h,int m)
	{
		hours=h;
		mins=m;
	}
	time()
	{
		hours=0;
		mins=0;
	}
	time(int m)
	{
		hours=m/60;
		mins=m%60;
		void display()
		{
			cout<<hours<<":"<<mins;
		}
	}
	}
}
