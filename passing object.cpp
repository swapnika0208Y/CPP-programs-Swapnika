#include<iostream>
using namespace std;
class student
{
	int a;
	public:
		student getdata()
	{
		cin>>a;
	}
	void display(student s)
	{
		cout<<"value of a: "<<s.a;
	}			
};
main()
{
	student stu;
	cout<<"enter value of a: ";
	stu.getdata();
	stu.display(stu);
	
}
