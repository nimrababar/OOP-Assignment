#include<iostream>
#include<string>
using namespace std;
main(){
	int counter= 1;
		int units,saleman;
		int max=0;
	while(counter<=10){
	
		
		cout<<"please enter unit for saleman #"<<counter<<" ";
		cin>>units;
		if(max<units){
			max=units;
			saleman=counter;
		}
		counter++;
	}
	cout<<"the maximum unit is"<<max<<"\n";
	cout<<"saled by"<<saleman;

}
