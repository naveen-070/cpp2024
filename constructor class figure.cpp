#include<iostream>
using namespace std;
class figure
{
	int side;
	int length;
	int breadth;
	int radius;
	double pi;
	
	public:
		figure()
		
		{
			side = 20;
			length = 10;
			breadth = 40;
			radius = 7.5;
			pi = 3.141; 
		}
		figure(int l,int s,int b,int r,double p=3.141)
		{
			side=s;
			length=l;
			breadth=b;
			radius=r;
			pi=p;
			}
		void area_of_square()
		{
			 area_of_square=side*side;
		}
		void area_of_circle()
		{
		area_of_circle=pi*radius*radius;	
		}
		void area_of_rectangle()
		{
		area_of_rectangle=length*breadth;	
		}
		
		void display()
		{
			cout<<"\n"<<area_of_square;
			cout<<"\n"<<area_of_circle;
			cout<<"\n"<<area_of_rectangle;
		}
};
int main()
{
	class figure f1;
	f1.display();
	f1.calculations();
	figure f2(4,5,6,7,3.14);
	f2.calculations();
	f2.display();	
}
		

