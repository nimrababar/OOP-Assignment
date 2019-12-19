#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of ";
	cin>>n;
	if(n>=3||n<=50)
	{
		
		if(n%3==0){
			cout<<n<<"is multiple of 3";
			
		}
		else{
					cout<<n<<"is not multiple of 3";
	
		}
		
	}
	else{
		cout<<"please enter 3 to 50 range";
	}
}
