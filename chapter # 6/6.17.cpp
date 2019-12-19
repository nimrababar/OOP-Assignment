#include<iostream>
using namespace std;
main(){
	//randow function
	for(int i=1;i<11;i++){
	srand(i);
	cout<<3+rand()%3<<endl;	
	}
	
}
