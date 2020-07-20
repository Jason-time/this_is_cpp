#include <iostream>
using namespace std;

template<typename T>
T TestFunc(T a) {
	std::cout << "매개변수 a:" << a << std::endl;
	return a;
}
int main(int argc, char* argv[])
{
	std::cout << "int\t" << TestFunc(3) << std::endl;
	std::cout << "double\t" << TestFunc(3.3) << std::endl;
	std::cout << "char\t" << TestFunc('A') << std::endl;
	std::cout << "char*\t" << TestFunc("TestString") << std::endl;
}
// 069 - FuncTemplate1.cpp - 템플릿 함수 