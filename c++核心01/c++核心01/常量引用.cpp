#include<iostream>
using namespace std;


void showValue(const int& val) {

	//val = 100;

	cout << "val:" << val << endl;
}


int main() {

	int a = 10;


	//加上const后，编译器将代码修改：int temp = 10;const int& ref = temp;
	const int& ref = 10;  //引用必须引一块合法的内存空间
	//ref = 20;  //只读状态，不可修改

	int b = 100;

	showValue(b);


	system("pause");

	return 0;
}