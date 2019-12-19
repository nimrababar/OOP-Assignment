#include<iostream>
using namespace std;
int main(){
	float laps;
	float sponsorship,contribution;
	cout<<"Enter laps complete (-1 to end): \n";
	cin>>laps;
	while(laps != -1)
	{
		cout<<"Enter sponsorship rate: \n";
		cin>>sponsorship;
		contribution=laps*sponsorship;
		cout<<"Student contribution is:"<<contribution<<"\n";
	cout<<"\n \n";
	cout<<"Enter laps complete (-1 to end): \n";
	cin>>laps;
	}

}
