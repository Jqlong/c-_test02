#include<iostream>
using namespace std;

//int* func() {
//	//�ڶ���������������
//	int* p = new int(10);
//	return p;
//}
//
//void test01() {
//
//	int* p = func();
//
//	//�����������ɳ���Ա�����ٺ��ͷ�
//	//������ͷţ�������delete�ؼ���
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	delete p;
//
//	//cout << *p << endl;  �ڴ��Ѿ����ͷţ��ٴη����ǷǷ�����
//
//}
//
////�ڶ�����������
//void test02() {
//
//	int* array = new int[10]; //����������10��
//
//	for (int i = 0; i < 10; i++)
//	{
//		array[i] = i + 100;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << array[i] << endl;
//	}
//
//	//�ͷŶ�������
//	delete[] array;
//
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}