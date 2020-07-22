#include <iostream>
using namespace std;
class CTest{
public:
	CTest() {
		m_nData = 10;
	}
	int m_nData;
	void PrintData(void){
		cout << m_nData << endl;
	}
};

int main(int argc, char* argv[]) {
	CTest t;
	t.PrintData();
}
// 108 - MemberInit1.cpp - 맴버 변수 초기화를 위한 생성자 함수 사용

