#include<iostream>
using namespace std;

//������Ϊ���ص�����
void func(int& a) {

	cout << "func�ĵ���" << endl;
}

void func(const int& a) {

	cout << "func_const�ĵ���" << endl;
}

//Ĭ�ϲ���������
void func2(int a,int b = 10) {
	cout << "func2�ĵ���" << endl;
}

void func2(int a) {
	cout << "func2�ĵ���" << endl;
}

int main() {

	int a = 10;

	func(a);
	func(a);

	func(10);

	//func2(10);  ���ֶ����ԣ�����

	system("pause");

	return 0;
}