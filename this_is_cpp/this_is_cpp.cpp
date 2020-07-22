#include <iostream>
class USERDATA {
public:
	int nAge;
	char szName[32];
	void Print(void) {
		printf("%d, %s\n", nAge, szName);
	}
};

int main(int argc, char* argv[]) {
	USERDATA user = { 10,"철수" };
	user.Print();
}
// 106 - HelloOOP.cpp - 클래스를 이용해 객체지향 프로그램으로 변경

