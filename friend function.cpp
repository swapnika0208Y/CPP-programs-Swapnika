#include<iostream>
using namespace std;
class student
{
	private:
		int a=10;
		public:
	    	friend void display(student);
			
};
 void display(student d)
 {
 	cout<<"value of a:"<<d.a;
 }
 main()
 {
 	student d;
 	display (d);
 }
 
