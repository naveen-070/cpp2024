//Create a class called time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. Another member function should display it, in 11:59:59 format and the overloaded + operator to add two times should add two objects of type time passed as arguments.
// main() program should create two initialized time objects and one that isn’t initialized. Then it should add the two objects together, leaving the
//result in the third time object Finally it should display the value of this third object
#include<iostream>
using namespace std;
class time
{
	
	int hrs;
	int mints;
	int secs;
	public:
	time()
	{
	hrs(),mints(),secs();
}
time(int h,int m,int s)
{
	hrs=h;
	mints=m;
	secs=s;
}
main()
{
	time t1(3,10,25);
	time t2(4,20,25);
	time t3;
	t3=t1+t2;
	t3.display();
}
void display
{
	cout<<hours":"<<minutes":"<<seconds
}
time operator+(time&t)
{
	time temp;
	temp.hrs=hrs+t.hrs;
	temp.mints=mints+t.mints;
	temp.secs=secs=t.secs;
	return temp;
}
}
