#pragma once
#ifndef PASSENGER_H //���� ��� ������ �� �� ���ԵǴ� ���� �����ش�
#define PASSENGER_H

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

#endif
