#include <iostream>

namespace TEST {
	int g_nData = 100;
	void TesstFunc(void) {
		std::cout << "TEST::TestFunc()" << std::endl;
	}
}
int main(int argc, char* argv[])
{
	TEST::TesstFunc();
	std::cout << TEST::g_nData << std::endl;
	return 0;
}
// 075 - NamespaceSample.cpp - 네임스페이스 선언 및 정의