﻿#include <iostream>
using namespace std;

class CRefTest{

public:
	CRefTest(int& rParam) :m_nData(rParam) { };
	int GetData(void) { return m_nData; }
private:
	int& m_nData;
};

int main(int argc, char* argv[]) {
	int a = 10;
	CRefTest t(a);
	cout << t.GetData() << endl;

	a = 20;
	cout << t.GetData() << endl;
	return 0;
}
// 128 - RefSample.cpp - 참조자와 선언을 위한 생성자 초기화 목록 이용
