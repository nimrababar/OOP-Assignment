#include<iostream>
#include<string>
using namespace std;
main()
{
	unsigned int passes{0};
	unsigned failures{0};
	unsigned studentcounter{1};

	while(studentcounter<=10){
		cout<<"Enter result (1=pass,2=fail): ";
		int result;
		cin>>result;
	

	if(result==1){
		passes=passes + 1;
	}
	else
	{
		failures=failures + 1;
	}
	studentcounter=studentcounter + 1;
}
	cout<<"passed:"<<passes<<"\n failed"<<failures<<endl;
	if(passes>8)
	{
		cout<<"bonus to instructor!"<<endl;
	}

}
