//illustrate the default arguements and access specifiers
#include<iostream>
using namespace std;
class student
{
	private:
		int marks;
	public:
	    void setMarks(int m=60)
		{
			marks=m;
		} 	
		void display()
		{
		   cout<<"marks: "<<marks;
		}
};
 main()
 {
 	student s1,s2;
 	s1.setMarks();
 	cout<<"student 1: "<<endl;
 	s1.display();
 	s2.setMarks(100);
 	cout<<"student 2: "<<endl;
 	s2.display();
 }
