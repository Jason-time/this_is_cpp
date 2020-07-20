#include <iostream>
using namespace std;

int nData = 100;

namespace TEST {
	int nData = 200;
}

using namespace TEST;

 int main(int argc, char* argv[])
{
	 cout << nData << endl;
	 
	return 0;
}
// 090 - IdSearchSeq5.cpp - TEST 네임스페이스에 using 선언 추가
