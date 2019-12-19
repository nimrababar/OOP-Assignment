#include<iostream>
using namespace std;
int main()
{
	float hours,leave;
	cout<<"Enter numer of hours worked(-1 to end):";
	cin>>hours;
	while( hours != -1){
	leave= (hours/10)+2;
	cout<<"Accrued leave is "<<leave;
	cout<<"\n"<<"\n";	
	cout<<"Enter numer of hours worked(-1 to end):";
	cin>>hours;
	}

}
