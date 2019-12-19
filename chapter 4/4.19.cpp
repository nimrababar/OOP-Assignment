#include<iostream>
#include<string>
using namespace std;
main(){
	int counter= 1;
		int units;
		int secondmax=0,max=0;
	while(counter<=10){
	
		
		cout<<"please enter unit for saleman #"<<counter<<" ";
		cin>>units;
		if(max<units){
			secondmax=max;
			max=units;
		}
		else if(secondmax<max){
			secondmax=max;
		}
		counter++;
	}
	cout<<"The secondmax unit is \t"<<secondmax<<"\n";
	cout<<"The maximum unit is \t"<<max<<"\n";

}
