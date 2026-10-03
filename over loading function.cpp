#include<iostream>
using namespace std;
class student
{
	public:
		void show()
		{
			cout<<" no argument";
		}
		void show(int a)
		{
			cout<<"one argument:"<<a;
		}
		void show(int a,int b)
		{
				cout<<"\ntwo arguments:"<<a<<" "<<b;
		}
};
main()
{
	student s;
	s.show();
	s.show(10);
	s.show(10,20);
}
		

