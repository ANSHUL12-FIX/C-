#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"Eligible for voting"<<endl;
	}
	else
	{
		cout<<"You are not eligible for voating"<<endl;
	}
	return 0;
}
