#include<iostream>
using namespace std;
class shape
{
    public:
    	virtual void draw()
	{
		cout<<"\ndrawing a shape";
		}	
};
class circle:public shape
{
	public:
		virtual void draw()
		{
			cout<<"\ndrawing a circle";
		}
};
class rectangle:public shape
{
	public:
		virtual void draw()
		{
			cout<<"\ndrawing a rectangle";
		}
};
int main()
{
	shape s;
	circle c;
	rectangle r;
	c.draw();
	r.draw();
}


