#include "Adder.h"

Adder::Adder(int a, int b)  // Adder 클래스의 생성자 정의
{
    op1 = a;        // 멤버 변수 op1에 첫 번째 인자 a를 할당합니다.
    op2 = b;        // 멤버 변수 op2에 두 번째 인자 b를 할당합니다.
}
// Adder 클래스의 process() 멤버 함수 정의
int Adder::process()
{
    return op1 + op2; // 멤버 변수 op1과 op2를 더한 값을 반환합니다.
}

