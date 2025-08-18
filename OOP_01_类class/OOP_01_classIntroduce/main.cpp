//第四节课：属性私有化
#include <iostream>
#include <string>
using namespace std;

// 属性私有以后，我们可以通过函数的方式来控制它们的读写权限；可以检查数据的有效性和合法性。
// 接口、方法、函数 是同一概念
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
	string m_name;			//可读可写
	int m_skillCount = 4;	//只读
	int m_speed;			//只写
};

int main() {
	Hero h;
	h.setName("盖伦");
	cout << "英雄的名字是:" << h.getName() << endl;

	cout << "英雄的技能数量是:" << h.getSkillCount() << endl;

	h.setSpeed(100);
	cout << "英雄的速度设置成功" << endl;

	return 0;
}