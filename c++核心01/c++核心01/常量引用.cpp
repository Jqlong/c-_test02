#include<iostream>
using namespace std;


void showValue(const int& val) {

	//val = 100;

	cout << "val:" << val << endl;
}


int main() {

	int a = 10;


	//����const�󣬱������������޸ģ�int temp = 10;const int& ref = temp;
	const int& ref = 10;  //���ñ�����һ��Ϸ����ڴ�ռ�
	//ref = 20;  //ֻ��״̬�������޸�

	int b = 100;

	showValue(b);


	system("pause");

	return 0;
}