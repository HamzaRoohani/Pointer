#include<iostream>
using namespace std;
int main()
{
	int *pointvar,var;
	var=5;
	pointvar=&var;
	cout<<"The Value of the var is: "<<var<<endl;
	cout<<"The Address of the var is: "<<&var<<endl;
	cout<<"The Address of the pointvar is: "<<pointvar<<endl;
	cout<<endl;
	cout<<"Changing value of var to 10";
	var=10;
	cout<<"The Value of var is: "<<var<<endl;
	cout<<"The Value of pointvar is: "<<*pointvar<<endl;
	cout<<"The Address of var is: "<<&var<<endl;
	cout<<"The Address of pointvar is: "<<pointvar<<endl;
}