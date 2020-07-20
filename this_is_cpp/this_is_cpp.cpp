#include <iostream>
using namespace std;

 int main(int argc, char* argv[])
{
	 int nInput = 0;
	 cout << "11이상의 정수를 입력하세요" << endl;
	 cin >> nInput;

	 if (nInput > 10) {
		 cout << nInput << endl;
	 }
	 else
		 cout << "Error" << endl;
	 
	return 0;
}
// 086 - IdSearchSeq2.cpp - 범위 검색의 확장
