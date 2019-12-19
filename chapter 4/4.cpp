#include<iostream>
#include<string>
#include"3.cpp"
using namespace std;
main()
{
	string fn,ln;
	int d,y,m;
	cout<<"enter your first name\n";
	cin>>fn;
	cout<<"enter your last name\n";
	cin>>ln;
	cout<<"enter your day \n";
	cin>>d;
	cout<<"enter your month\n ";
	cin>>m;
	cout<<"enter your year\n";
	cin>>y;
	
	HeartRates hr(fn,ln,d,m,y);


}
