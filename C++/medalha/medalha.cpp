#include <iostream>

using namespace std;

int main(){
	int t1, t2, t3;

	cin>>t1>>t2>>t3;

	if(t1 < t2 && t2 < t3){
		cout<<"1\n";
		cout<<"2\n";
		cout<<"3\n";
	}
	if(t1 < t3 && t3 < t2){
		cout<<"1\n";
		cout<<"3\n";
		cout<<"2\n";
	}
	if(t2 < t1 && t1 < t3){
		cout<<"2\n";
		cout<<"1\n";
		cout<<"3\n";
	}
	if(t2 < t3 && t3 < t1){
		cout<<"2\n";
		cout<<"3\n";
		cout<<"1\n";
	}
	if(t3 < t1 && t1 < t2){
		cout<<"3\n";
		cout<<"1\n";
		cout<<"2\n";
	}
	if(t3 < t2 && t2 < t1){
		cout<<"3\n";
		cout<<"2\n";
		cout<<"1\n";
	}
}