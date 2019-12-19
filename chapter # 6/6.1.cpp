#include<iostream>
using namespace std;
//int add(int a,int b){
//	return a+b;
//}
int add(int a,int b,int c=0,int d=0,int f=0){
	return a+b+c+d+f;
}
template<class t1>
t1 add(t1 a, t1 b,t1 c){
	return a+b+c;
}
main(){
	cout<<add(6,8)<<endl;
	cout<<add(6,8,7)<<endl;
	cout<<add(6,8,7)<<endl;
	cout<<add(1,2,3,4)<<endl;
	cout<<add(2.5,4.3,3.3);

}
