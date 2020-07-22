#include <iostream>
using namespace std;
class CTest{
public:
	CTest() {
		cout << "CTest() : 생성자 함수" << endl;
		m_nData = 10;
	}
	int m_nData;
	void PrintData(void){
		cout << m_nData << endl;
	}
};

int main(int argc, char* argv[]) {
	cout << "_tmain() 함수 시작" << endl;
	CTest t;
	t.PrintData();

	cout << "_tmain() 함수 끝" << endl;
}
// 109 - MemberInit2.cpp - 생성자 함수의 역할

