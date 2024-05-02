#include<iostream>
using namespace std;
class complex
{
	public:
		int real;
		double imaginary;
		complex()
		{
			int real=0;
			double imaginary=0;
		}
		complex(int r1,int r2);
		complex(double i1,double i2);
};
