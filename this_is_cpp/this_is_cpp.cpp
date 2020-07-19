#include <iostream>
using namespace std;

void TetstFunc(int& rParam) {
    rParam = 100;
}

int main(int argc, char* argv[])
{
    int nData = 0;
    TetstFunc(nData);
    cout << nData << endl;
    return 0; 
}
// 048 - CallByReference.cpp - 참조에 의한 호출