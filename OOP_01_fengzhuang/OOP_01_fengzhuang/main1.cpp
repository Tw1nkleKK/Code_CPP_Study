//// accessRight.cpp
//
///*
//	����Ȩ��
//
//	1.����Ȩ�� public		���ڿ��Է���,������Է���
//	2.����Ȩ�� protected	���ڿ��Է���,���ⲻ���Է���,������Է���
//	3.˽��Ȩ�� private		���ڿ��Է���,���ⲻ���Է���,���಻���Է���
//
//	B->A
//
//	A ���ࡢ����		���֡����ӡ�֧������
//	B ���ࡢ������		public��protected��private
//*/
//
//#include<iostream>
//using namespace std;
//
//class People {
//	//����Ȩ��
//public:
//	int m_id;
//	//����Ȩ��
//protected:
//	int m_houseNum;
//	//˽��Ȩ��
//private:
//	int m_payPassword;
//
//public:
//	void work() {
//		//���г�Ա���������ھ����Է���
//		m_id = 1;
//		m_houseNum = 2;
//		m_payPassword = 123456;
//	}
//
//private:
//	void work1() {
//		//���г�Ա���������ھ����Է���
//		m_id = 2;
//		m_houseNum = 3;
//		m_payPassword = 123456;
//	}
//};
//
//class son : public People {
//	void func() {
//		m_id = 3;	//���г�Ա��������Է���
//		m_houseNum = 4;	//������Ա��������Է���
//		//m_payPassword = 123456;	//˽�г�Ա�����಻���Է���
//	}
//};
//
//int main() {
//	//1.���Գ�Ա�����ķ���Ȩ��
//	People p;	//ʵ����
//	p.m_id = 1;	//���г�Ա��������Է���
//	//p.m_houseNum = 2;	//������Ա�����ⲻ���Է���
//	//p.m_payPassword = 123456;	//˽�г�Ա�����ⲻ���Է���
//	p.work();
//
//	cout << "----------------" << endl;
//	//2.���Գ�Ա�����ķ���Ȩ��
//	// p.work1();	//˽�г�Ա���������ⲻ���Է���
//
//	return 0;
//}
//
//
///*
//	�γ�3��class��struct������
//	Ψһ��������ǣ�classĬ��Ȩ����private��structĬ��Ȩ����public
//	��C++�У�class��struct��ʹ�÷�ʽ��һ���ģ���������������ġ�
//	��ʵ�ʿ����У�ͨ��ʹ��class�������࣬��ʹ��struct������ṹ�塣
//*/