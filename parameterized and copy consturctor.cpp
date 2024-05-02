#include<iostream>
using namespace std;
class student
{
int reg_no;
float cgpa;
public:
	
student(int reg_no,float cgpa)
{
cout<<"\nparameterized";
reg_no=R;
cgpa=C;
}
student(student&teacher)
{
cout<<"\ncopy";
reg_no=teacher.reg_no;
cgpa=teacher.cgpa;
}
cout<<"\reg_no="<<reg_no;
cout"\cgpa="<<cgpa<<end1;
}
};
main()
{
	student s1(1234,9.6);
	student s2(5678,9.8);
	student s3(s2);
	s1.display();
	s2.display();
	s3.display();
}


