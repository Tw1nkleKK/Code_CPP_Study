//���ĽڿΣ�����˽�л�
#include <iostream>
#include <string>
using namespace std;

// ����˽���Ժ����ǿ���ͨ�������ķ�ʽ���������ǵĶ�дȨ�ޣ����Լ�����ݵ���Ч�ԺͺϷ��ԡ�
// �ӿڡ����������� ��ͬһ����
class Hero {
public:
	void setName(string name) {
		m_name = name;
	}
	string getName() {
		return m_name;
	}

	int getSkillCount() {
		return m_skillCount;
	}

	void setSpeed(int speed) {
		m_speed = speed;
	}

private:
	string m_name;			//�ɶ���д
	int m_skillCount = 4;	//ֻ��
	int m_speed;			//ֻд
};

int main() {
	Hero h;
	h.setName("����");
	cout << "Ӣ�۵�������:" << h.getName() << endl;

	cout << "Ӣ�۵ļ���������:" << h.getSkillCount() << endl;

	h.setSpeed(100);
	cout << "Ӣ�۵��ٶ����óɹ�" << endl;

	return 0;
}