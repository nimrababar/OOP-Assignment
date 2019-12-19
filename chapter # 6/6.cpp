#include<iostream>
using namespace std;
//int add(int a,int b){
//	return a+b;
//}
int mul(int a,int b,int c=1,int d=1,int f=1){
	return a*b*c*d*f;
}
main(){
	mul(6,8);
	cout<<mul(6,8,7)<<endl;
//	cout<<mul(6,8,7)<<endl;
//	cout<<mul(1,2,3,4)<<endl;
//	cout<<mul(6,4,67);

}
