#include "Passenger.h"
#include <iostream>
using namespace std;

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