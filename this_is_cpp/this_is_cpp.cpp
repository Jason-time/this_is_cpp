#include <iostream>
using namespace std;

int nData = 200;

namespace TEST {
	int nData = 100;
	void TestFunc(void) {
		cout << nData << endl;
	}
}

 int main(int argc, char* argv[])
{
	 TEST::TestFunc();
	 
	return 0;
}
// 087 - IdSearchSeq3.cpp - 네임스페이스와 전역 변수의 검색 우선권
