#pragma once
#ifndef PASSENGER_H //같은 헤더 파일이 두 번 포함되는 것을 막아준다
#define PASSENGER_H

#include <iostream>
using namespace std;

#include <string>

class Passenger {
private: //멤버변수
	string name; //string: 문자열을 처리하는 class
	bool isFreqFlyer;
	string freqFlyerNo;

	int* data;

public: //멤버함수
	Passenger(); //생성자

	Passenger(const Passenger& pass); //복사생성자- 기존에 존재하는 같은 type의 객체 값으로 새로운 객체의 멤버 데이터를 초기화

	~Passenger(); //소멸자- new로 heap에 동적으로 메모리 할당받으면 delete로 반환해준다

	bool isFrequentFlyer() const;
	void makeFrequentFlyer(const string& newFreqFlyerNo);

};

#endif
