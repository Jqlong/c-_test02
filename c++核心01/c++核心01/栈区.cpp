#include<iostream>
using namespace std;

//栈区注意事项--不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放


//int* fun() {//存放在栈区，函数执行完后自动释放
//	int a = 10;//局部变量
//	return &a;//返回局部变量的地址
//}
//
//int main() {
//
//	int* p = fun();
//
//	cout << *p << endl;  //第一次可以打印正确的数据，是因为编译器做了保留
//	cout << *p << endl;  //第二次这个数据就不保留了
//
//
//	system("pause");
//
//	return 0;
//}