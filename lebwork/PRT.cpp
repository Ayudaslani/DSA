#include<iostream>
using namespace std;
main(){
	int P,R,T,Ans;
	
	cout<<"Enter P Value :-"<<endl;
	cin>>P;
	cout<<"Enter R Value :-"<<endl;
	cin>>R;
	cout<<"Enter T Value :-"<<endl;
	cin>>T;
	
	Ans = P*R*T / (100);
	
	cout<<"Rate Of Interest :- "<<Ans;
}
