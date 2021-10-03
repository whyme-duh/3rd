#include<iostream>

using namespace std;

class Test{
	public:
		int a;
		
	void Display(){
		cout << a << endl;
	}
};

Test func(Test *t3){
	t3->a = 5;
	return *t3;
}

int main(){
	Test t1, t3;
	t1.a = 100;
	t1.Display();
	t3 = func(&t1);
	t3.Display();
	t1.Display();
	return 0;
}

