#include<iostream>
using namespace std;
int main(){
	int result=1;
	for(int n=1;n<=20;n++){
		result*=n;
		cout<<"Factorial of \t"<<n<<"\t is"<<result<<"\n";
	}
	return 0;
}
