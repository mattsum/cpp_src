#ifndef ADDER_H     //ADDER_H 매크로가 정의되어 있지 않은 경우에만 아래 내용을 처리합니다.
#define ADDER_H     //ADDER_H 매크로를 정의합니다.

class Adder{
    int op1, op2;   // 두 개의 피연산자를 저장하는 멤버 변수를 선언합니다.
public:
    Adder(int a, int b);    // 생성자를 선언합니다. 두 개의 피연산자를 매개변수로 받습니다.
    int process();          // process() 멤버 함수를 선언합니다. 두 피연산자를 더한 값을 반환합니다.
};

#endif      //ADDER_H 매크로를 닫습니다.