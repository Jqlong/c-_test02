//#include<iostream>
//using namespace std;
//
//
//int& test01() {
//
//	int a = 10;//�ֲ�������ջ��
//	return a;
//}
//
//
//int& test02() {
//	
//	static int a = 10;  //��̬����,�����ȫ����������������ͷ�
//	return a;
//
//}
//
//int main() {
//
//	//��Ҫ���ؾֲ�����������
//	int& ref = test01();  
//	cout << "ref = " << ref << endl;
//	//cout << "ref = " << ref << endl;  //�ڶ���������
//
//
//
//	//�����ĵ��ÿ�����Ϊ��ֵ
//
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	test02() = 1000;  //�������ã���ֵ����
//
//	cout << "ref2 = " << ref2 << endl;
//
//
//	system("pause");
//
//	return 0;
//}