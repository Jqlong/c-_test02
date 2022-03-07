//#include<iostream>
//using namespace std;
//
//
//int& test01() {
//
//	int a = 10;//局部变量，栈区
//	return a;
//}
//
//
//int& test02() {
//	
//	static int a = 10;  //静态变量,存放在全局区，程序结束后释放
//	return a;
//
//}
//
//int main() {
//
//	//不要返回局部变量的引用
//	int& ref = test01();  
//	cout << "ref = " << ref << endl;
//	//cout << "ref = " << ref << endl;  //第二个有问题
//
//
//
//	//函数的调用可以作为左值
//
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//
//	test02() = 1000;  //返回引用，赋值操作
//
//	cout << "ref2 = " << ref2 << endl;
//
//
//	system("pause");
//
//	return 0;
//}