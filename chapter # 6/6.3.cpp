#include<iostream>
using namespace std;

template<class t1, class t2 ,class t3 ,class t4 ,class t5>
t1 add(t1 a, t2 b,t3 c,t4 d,t5 f){
	return a+b+c+d+f;
}
main(){
	
	cout<<add(1.2,2,3.8,4,5)<<endl;
	cout<<add(2.5,4.3,3.3,4.2,5.1);

}
