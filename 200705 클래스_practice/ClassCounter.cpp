#include <iostream>
using namespace std;

//클래스에서 동적으로 메모리를 할당하면 만들어야할 것
// 생성자, 소멸자, 복사 생성자, 오버로딩 함수


class Counter //Counter 클래스 생성
{
private: //외부접근x 멤버 변수
	int count; //카운터 값

public: //외부접근ㄱㄴ 멤버 함수
	Counter(); //생성자- 객체를 만들 때 자동으로 불려진 멤버 데이터를 초기화 -> 반드시 만들자

	int getCount(); //getter- 현재 카운터를 얻는 함수
	void increaseBy(int x); //카운터에 x를 더하는 함수

};

//생성자
Counter::Counter()
{
	count == 0;
}
//현재 카운터를 얻는 함수
int Counter::getCount()
{
	return count;
}

//카운터에 x를 더하는 함수
void Counter::increaseBy(int x)
{
	count = count + x;
}


int main()
{
	Counter ctr; //새로운 객체 -> 멤버함수를 실행시키자
	cout << ctr.getCount() << endl;

	ctr.increaseBy(3);
	cout << ctr.getCount() << endl;

	ctr.increaseBy(5);
	cout << ctr.getCount() << endl;


	return 0;
}