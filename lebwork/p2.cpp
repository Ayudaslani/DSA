#include<iostream>
using namespace std;

main(){
	int a ,b ,c;
	cout<<"Enter A Value :-";
	cin>>a;
	
	cout<<"Enter B Value :-";
	cin>>b;
	
	cout<<"Before Swapping"<<endl;
	cout<<"A :-"<<a<<endl;
	cout<<"B :-"<<b<<endl;
	
//	c = a;
//	a = b;
//	b = c;

	a = a+b;
	b = a-b;
	a = a-b;
	
	cout<<"after Swapping"<<endl;
	cout<<"A :-"<<a<<endl;
	cout<<"B :-"<<b<<endl;
	
	
	
}
