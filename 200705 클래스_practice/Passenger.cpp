#include "Passenger.h"
#include <iostream>
using namespace std;

//생성자
Passenger::Passenger()
{

}

//복사생성자
Passenger::Passenger(const Passenger& pass)
{
	name = pass.name;
}

//소멸자
Passenger::~Passenger()
{
	delete[] data; //[]는 size 클 때 씀
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