#include<iostream>
using namespace std;

int add(int, int); // 函数声明

/*
* 
* 函数的定义和调用: 函数的作用就是将一段代码封装起来，方便重复使用。
	1.函数function定义：

	返回值类型 函数名(参数列表) {
		// 函数体
		return 返回值;
	}

	2.函数调用：
	函数名(实参列表);

	3.函数的声明：
	在函数定义之前，需要先声明函数的返回值类型和参数列表，以便编译器知道函数的存在。
*/

int sum(int n) {
	/*
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	return s;
	*/
	int s = n * (n + 1) / 2; // 使用公式求和
	return s;
}

int main() {
	int n;
	cin >> n;
	int a = sum(n);
	cout << "1到" << n << "的和为：" << a << endl;

	cout << "1 + 2 = " << add(1, 2) << endl;
	return 0;
}

int add(int a, int b) {
	return a + b;
}