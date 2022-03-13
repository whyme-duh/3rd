#include<iostream>
using namespace std;

int factorial(int x){
	if ( x>=1){
		return x*factorial(x-1);
	}
	else{
		return 1;
	}
	
}
int main(){
	int n,fact= 1;
	cout<<"Enter the number to find the factorial of : ";
	cin>>n;
	
	cout<<"The factorial of the give number is :"<<factorial(n);
	return 0;
}
