#include<iostream>
using namespace std;
int main()
{
	int house,food,clothing,transportation,education,health_care,vacation,fairtax;
	cout<<"Enter house number \t ";
	cin>>house;
	cout<<"Enter food \t";
	cin>>food;
	cout<<"Enter clothing \t";
	cin>>clothing;
	cout<<"Enter transportation \t";
	cin>>transportation;
	cout<<"Enter education \t";
	cin>>education;
	cout<<"Enter health_care \t";
	cin>>health_care;
	cout<<"Enter vacation \t";
	cin>>vacation;
	fairtax=house+food+clothing+transportation+education+health_care+vacation/7;
	cout<<"Total fairtax is \t"<<fairtax;
	
	return 0;
}
