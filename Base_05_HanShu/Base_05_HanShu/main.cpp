#include<iostream>
using namespace std;

int add(int, int); // ��������

/*
* 
* �����Ķ���͵���: ���������þ��ǽ�һ�δ����װ�����������ظ�ʹ�á�
	1.����function���壺

	����ֵ���� ������(�����б�) {
		// ������
		return ����ֵ;
	}

	2.�������ã�
	������(ʵ���б�);

	3.������������
	�ں�������֮ǰ����Ҫ�����������ķ���ֵ���ͺͲ����б��Ա������֪�������Ĵ��ڡ�
*/

int sum(int n) {
	/*
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
	}
	return s;
	*/
	int s = n * (n + 1) / 2; // ʹ�ù�ʽ���
	return s;
}

int main() {
	int n;
	cin >> n;
	int a = sum(n);
	cout << "1��" << n << "�ĺ�Ϊ��" << a << endl;

	cout << "1 + 2 = " << add(1, 2) << endl;
	return 0;
}

int add(int a, int b) {
	return a + b;
}