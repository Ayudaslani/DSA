#include<iostream>
using namespace std;
main(){
	int side1,side2;
	
	cout<<"Enter side1 :-"<<endl;
	cin>>side1;
	cout<<"Enter side2 :-"<<endl;
	cin>>side2;
	
	int Ans = 180 - (side1+side2);
	
	cout<<"Ans :-"<<Ans;
}
