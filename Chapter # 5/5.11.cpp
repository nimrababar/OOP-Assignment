#include<iostream>
using namespace std;
int main(){
	int n1,n;
	cout<<"enter number\t";
	cin>>n1;
	int counter=1,min;
	while(counter<=n1){
		
	
	cout<<"please enter number\t"<<counter;
	cin>>n;
	if(min>n){
		min=n;
	}
	counter++;
	
	}
	cout<<"min value is\t"<<min;
}
