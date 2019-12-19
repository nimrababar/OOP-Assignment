#include<iostream>
using namespace std;
int main(){
	int n=1;
	for(int i=1;i<50;i++){
		if(i%3==0)
		{
		cout<<"3 of multiple is"<<i*n<<"\n";
		n=i*n;}
	}
	

}
