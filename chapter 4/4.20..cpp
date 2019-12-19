#include<iostream>
#include<string>
using namespace std;
main(){
	int n;
	cout<<"enter input(1 0r 2)";
	cin>>n;
	if(n==1 || n==2){

	int account_number;
	float balance, total_charges, total_credits, credit_limit, new_balance;
	 cout<<"Enter account number (or -1 to quit):\n";
	 cin>>account_number;
	 while(account_number != -1)
	 {
	 	cout<<"Enter balance";
	 	cin>>balance;
		 cout<<"Enter Total_chardes";
	 	cin>>total_charges;
	 	cout<<"Enter Total_credits";
	 	cin>>total_credits;
	 	cout<<"Enter Credit_limit";
	 	cin>>credit_limit;
	 	new_balance= (balance+total_charges)-total_credits;
	 	cout<<"New balance is:"<<new_balance<<"\n";
	 	cout<<"Account:"<<account_number<<"\n";
	 	cout<<" Credit_limit:"<<credit_limit<<"\n";	
	 	cout<<" Balance is: "<<new_balance<<"\n";	
	 	if(credit_limit<new_balance){
	 		cout<<"Craedit limit exceeded";
		 }
		 cout<<"\n \n";
		 cout<<"Enter account number (or -1 to quit):\n";
	 cin>>account_number;
	 }
}

else{
	cout<<"enter input(1 0r 2)";
	cin>>n;	

}
}
