#include<iostream>
using namespace std;

//int* func() {
//	//在堆区创建整形数据
//	int* p = new int(10);
//	return p;
//}
//
//void test01() {
//
//	int* p = func();
//
//	//堆区的数据由程序员管理开辟和释放
//	//如果想释放，可以用delete关键字
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	delete p;
//
//	//cout << *p << endl;  内存已经被释放，再次访问是非法操作
//
//}
//
////在堆区开辟数组
//void test02() {
//
//	int* array = new int[10]; //代表数组有10个
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
//	//释放堆区数组
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