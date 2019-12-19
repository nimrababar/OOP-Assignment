#include<iostream>
using namespace std;
int star(int n);
int main(){
	int x;
	cout<<"enter number of height: ";
	cin>>x;
	star(x);
}
int star(int n){
	int i,j;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
		cout<<"*";
			cout<<endl;

	}
}

