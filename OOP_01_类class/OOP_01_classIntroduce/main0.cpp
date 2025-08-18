//#include<iostream>
//using namespace std;
//
////面向对象三大特性:封装,继承,多态
//
///*	封装的语法
//* 
//class 类名{
//访问权限:				//public,private,protected
//	属性(成员变量);		//数据
//	行为(成员函数);		//功能
//};
//*/
//
//class Hero {
//public:
//	//属性
//	int m_id;
//	int m_hp;
//
//	void addHp(int hp) {
//		m_hp += hp;
//	}
//
//	void subHp(int hp) {
//		m_hp -= hp;
//	}
//};
//
//int main() {
//	//通过类来创建对象的过程,叫做实例化
//	Hero h;
//	//访问对象的属性
//	h.m_id = 1;
//	h.m_hp = 100;
//	cout << "id:" << h.m_id << " hp:" << h.m_hp << endl;
//	h.addHp(50);
//	cout << "id:" << h.m_id << " hp:" << h.m_hp << endl;
//	h.subHp(20);
//	cout << "id:" << h.m_id << " hp:" << h.m_hp << endl;
//
//	return 0;
//}