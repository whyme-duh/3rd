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
	cout<<"Enter total terms : ";
	cin>>n;
	
	cout<<"The fibonacci numbers are: ";
	for(int i=1; i<=n;i++){
		cout<<fibonacci(m)<<"\t";
		m++;
	}
	return 0;
}
