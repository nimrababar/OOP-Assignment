#include<iostream>
using namespace std;

template<class t1>
t1 add(t1 a, t1 b,t1 c,t1 d,t1 f){
	return a+b+c+d+f;
}
main(){
	
	cout<<add(1,2,3,4,5)<<endl;
	cout<<add(2.5,4.3,3.3,4.2,5.1);

}
