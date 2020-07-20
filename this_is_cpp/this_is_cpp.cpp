#include <iostream>
using namespace std;

void TestFunc(int a) {
	std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a,int b=10) {
	std::cout << "TestFunc(int,int)" << std::endl;
}
int main(int argc, char* argv[])
{
	TestFunc(5);

	return 0;
}
// 067 - FuncAmbiguity.cpp - 디폴트 매개변수와 다중 정의가 조합되었을때의 모호성 