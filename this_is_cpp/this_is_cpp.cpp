#include <string>
#include <cstdio>
#include <iostream>

int main(int argc, char* argv[])
{ 
    int a = 10;
    int b(a);
    auto c(b);

    std::cout << a + b + c << std::endl;
    return 0;
}
// 042 - AutoSample.cpp - auto 예약어 사용