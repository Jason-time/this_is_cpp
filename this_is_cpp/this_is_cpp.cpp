#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest::CTest() " << endl;
	}
};

int main(int argc, char* argv[]) {
	cout << "Begin" << endl;
	CTest* pData = new CTest;
	cout << "Test" << endl;
	delete pData;
	cout << "End" << endl;
	return 0;
}
// 125 - ClassNew.cpp - new와 delete 연산자 사용
