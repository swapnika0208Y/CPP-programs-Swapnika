//scope Resolution operator and namespace demo
#include<iostream>
using namespace std;
int x=10;//global variable
namespace demo
{
	int x=20;
}
main()
{
	cout<<"Global variable value x:"<<x;
	cout<<"namespace variable value x:"<<demo::x;  
}
