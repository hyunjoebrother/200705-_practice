#include <iostream>
using namespace std;

#include <string>

class Passenger {
private: //�������
	string name; //string: ���ڿ��� ó���ϴ� class
	bool isFreqFlyer;
	string freqFlyerNo;

	int* data;

public: //����Լ�
	Passenger(); //������

	Passenger(const Passenger& pass); //���������- ������ �����ϴ� ���� type�� ��ü ������ ���ο� ��ü�� ��� �����͸� �ʱ�ȭ

	~Passenger(); //�Ҹ���- new�� heap�� �������� �޸� �Ҵ������ delete�� ��ȯ���ش�

	bool isFrequentFlyer() const;
	void makeFrequentFlyer(const string& newFreqFlyerNo);

};

//������
Passenger::Passenger()
{
	
}

//���������
Passenger::Passenger(const Passenger& pass)
{
	name = pass.name;
}

//�Ҹ���
Passenger::~Passenger()
{
	delete[] data; //[]�� size Ŭ �� ��
}

bool Passenger::isFrequentFlyer() const
{
	return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string& newFreqFlyerNo)
{
	isFreqFlyer = true;
	freqFlyerNo = newFreqFlyerNo;
}