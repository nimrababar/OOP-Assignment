#include<iostream>
using namespace std;
int main(){
	int product_number;
	int quantity;
	int quantity1=0,quantity2=0,quantity3=0,quantity4=0,quantity5=0;
	double amount1= .0,amount2= .0,amount3= .0,amount4= .0,amount5= .0;
	cout<<"Enter product_number";
	cin>>product_number;
	cout<<"Enter quantity";
	cin>>quantity;
	switch(product_number)
				{
					case 1:
						quantity1 +=quantity;
						amount1 +=quantity *2;
						cout<<quantity1;
						cout<<amount1;
						break;
						
						case 2:
						quantity2 +=quantity;
						amount2 +=quantity *4;
						cout<<quantity2;
						cout<<amount3;
						break;
						
						case 3:
						quantity3 +=quantity;
						amount3 +=quantity *9;
						cout<<quantity3;
						cout<<amount3;
						break;
						
						case 4:
						quantity4 +=quantity;
						amount4 +=quantity *4;
						cout<<quantity4;
						cout<<amount4;
						break;
						
						case 5:
						quantity5 +=quantity;
						amount5 +=quantity *6;
						cout<<quantity5;
						cout<<amount5;
						break;
						default:
							cout<<"enter correct number";
		}
	
	
}
