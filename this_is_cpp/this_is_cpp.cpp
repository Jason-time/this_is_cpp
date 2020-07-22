#include <iostream>
using namespace std;

class CTest{
public:
	CTest() 
		:m_nData1(10),m_nData2(20){
	}
	int m_nData1;
	int m_nData2;
	void PrintData(void) {
		cout << m_nData1 << endl;
		cout << m_nData2 << endl;
	}
};

int main(int argc, char* argv[]) {
	CTest t;
	t.PrintData();

	return 0;
}
// 112 - MemberInit4.cpp - 생성자 초기화 목록을 이용한 맴버 변수 초기화

