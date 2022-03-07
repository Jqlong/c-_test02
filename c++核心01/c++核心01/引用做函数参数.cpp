//#include<iostream>
//using namespace std;
//
////1.值传递
//void mySwap01(int a, int b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
//
////2.地址传递
//void mySwap02(int* a, int* b) {
//
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
////3.引用传递
//void mySwap03(int& a, int& b) {
//
//	int temp = a;
//	a = b;
//	b = temp;
//
//
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//mySwap01(a, b);
//
//	//mySwap02(&a, &b);  //地址传递，实
//
//	mySwap03(a, b);   //引用传递，形参也会修饰实参的
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//	system("pause");
//
//	return 0;
//}