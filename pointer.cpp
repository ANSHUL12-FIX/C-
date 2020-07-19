#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"ENTER THE ELEMENTS:";
	for(int i=0;i<5;++i)
	cin>>a[i];
	cout<<"you entered";
	for(int i=0;i<5;++i)
	cout<<endl<<*(a+i);
}
