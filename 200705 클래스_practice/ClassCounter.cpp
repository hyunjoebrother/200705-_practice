#include <iostream>
using namespace std;

//Ŭ�������� �������� �޸𸮸� �Ҵ��ϸ� �������� ��
// ������, �Ҹ���, ���� ������, �����ε� �Լ�


class Counter //Counter Ŭ���� ����
{
private: //�ܺ�����x ��� ����
	int count; //ī���� ��

public: //�ܺ����٤��� ��� �Լ�
	Counter(); //������- ��ü�� ���� �� �ڵ����� �ҷ��� ��� �����͸� �ʱ�ȭ -> �ݵ�� ������

	int getCount(); //getter- ���� ī���͸� ��� �Լ�
	void increaseBy(int x); //ī���Ϳ� x�� ���ϴ� �Լ�

};

//������
Counter::Counter()
{
	count == 0;
}
//���� ī���͸� ��� �Լ�
int Counter::getCount()
{
	return count;
}

//ī���Ϳ� x�� ���ϴ� �Լ�
void Counter::increaseBy(int x)
{
	count = count + x;
}


int main()
{
	Counter ctr; //���ο� ��ü -> ����Լ��� �����Ű��
	cout << ctr.getCount() << endl;

	ctr.increaseBy(3);
	cout << ctr.getCount() << endl;

	ctr.increaseBy(5);
	cout << ctr.getCount() << endl;


	return 0;
}