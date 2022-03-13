#include<iostream>
using namespace std;

int fibonacci(int x){
	if(x==0 || x ==1 ){
		return x;
	}
	else{
		return (fibonacci(x-1) +  fibonacci(x-2));
	}
	
}
int main(){
	int n,m= 0;
	cout<<"Enter number of upto which fibonacci is calculated  : ";
	cin>>n;
	
	cout<<"The fibonacci numbers are: ";
	for(int i=1; i<=n;i++){
		if(fibonacci(m) > n){
			break;
		}
		else{
			cout<<fibonacci(m)<<"\t";
			m++;
		}
	
	}
	return 0;
}
