#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest::CTest" << endl;
	}
};
int main(int argc, char* argv[]) {
	cout << "Begin" << endl;
	CTest a;
	cout << "End" << endl;
	return 0;
}
// 121 - Constructor1.cpp - 생성자와 소멸자
