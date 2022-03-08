#include<iostream>
using namespace std;

//引用作为重载的条件
void func(int& a) {

	cout << "func的调用" << endl;
}

void func(const int& a) {

	cout << "func_const的调用" << endl;
}

//默认参数的重载
void func2(int a,int b = 10) {
	cout << "func2的调用" << endl;
}

void func2(int a) {
	cout << "func2的调用" << endl;
}

int main() {

	int a = 10;

	func(a);
	func(a);

	func(10);

	//func2(10);  出现二义性，报错。

	system("pause");

	return 0;
}