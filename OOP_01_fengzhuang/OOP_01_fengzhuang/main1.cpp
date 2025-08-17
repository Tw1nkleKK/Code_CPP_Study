//// accessRight.cpp
//
///*
//	访问权限
//
//	1.公共权限 public		类内可以访问,类外可以访问
//	2.保护权限 protected	类内可以访问,类外不可以访问,子类可以访问
//	3.私有权限 private		类内可以访问,类外不可以访问,子类不可以访问
//
//	B->A
//
//	A 父类、基类		名字、房子、支付密码
//	B 子类、派生类		public、protected、private
//*/
//
//#include<iostream>
//using namespace std;
//
//class People {
//	//公有权限
//public:
//	int m_id;
//	//保护权限
//protected:
//	int m_houseNum;
//	//私有权限
//private:
//	int m_payPassword;
//
//public:
//	void work() {
//		//所有成员变量，类内均可以访问
//		m_id = 1;
//		m_houseNum = 2;
//		m_payPassword = 123456;
//	}
//
//private:
//	void work1() {
//		//所有成员变量，类内均可以访问
//		m_id = 2;
//		m_houseNum = 3;
//		m_payPassword = 123456;
//	}
//};
//
//class son : public People {
//	void func() {
//		m_id = 3;	//公有成员，子类可以访问
//		m_houseNum = 4;	//保护成员，子类可以访问
//		//m_payPassword = 123456;	//私有成员，子类不可以访问
//	}
//};
//
//int main() {
//	//1.测试成员变量的访问权限
//	People p;	//实例化
//	p.m_id = 1;	//公有成员，类外可以访问
//	//p.m_houseNum = 2;	//保护成员，类外不可以访问
//	//p.m_payPassword = 123456;	//私有成员，类外不可以访问
//	p.work();
//
//	cout << "----------------" << endl;
//	//2.测试成员函数的访问权限
//	// p.work1();	//私有成员函数，类外不可以访问
//
//	return 0;
//}
//
//
///*
//	课程3：class和struct的区别
//	唯一的区别就是：class默认权限是private，struct默认权限是public
//	在C++中，class和struct的使用方式是一样的，都是用来定义类的。
//	在实际开发中，通常使用class来定义类，而使用struct来定义结构体。
//*/