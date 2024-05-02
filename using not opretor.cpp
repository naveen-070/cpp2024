
#include<iostream>//using not operator
#include<conio.h>
using namespace std;
class demo
{
	int x,y,z;
	public:
	demo()
	{
		x=0;
		y=0;
		z=1;
	}
	void operator !()
	{
		x=!x;
		y=!y;
		z=!z;
	}
	void show()
	{
		cout<<x<<y<<z<<"\n";
	}
	
};
main()
{
	demo d1;
	!d1;
	d1.show();
}
