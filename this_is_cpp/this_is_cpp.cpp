#include <iostream>
using namespace std;

void TestFunc(void) { cout << "::TestFunc()" << endl; }
namespace TEST {
	void TestFunc(void) {
		cout << "TEST::TestFunc()" << endl;
	}
}

namespace MYDATA {
	void TestFunc(void) {
		cout << "DATA::TestFunc()" << endl;
	}
}

int main(int argc, char* argv[])
{
	TestFunc();
	::TestFunc();
	TEST::TestFunc();
	MYDATA::TestFunc();

	return 0;
}
// 081 - NamespaceOver.cpp - 네임스페이스를 포함한 다중 정의 
