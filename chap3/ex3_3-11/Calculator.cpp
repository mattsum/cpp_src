#include <iostream>     // 표준 입력 및 출력을 위한 헤더 파일을 포함합니다.
using namespace std;    // 표준 네임스페이스를 사용합니다.

#include "Calculator.h" // Calculator 클래스의 선언이 있는 헤더 파일을 포함합니다.
#include "Adder.h"      // Adder 클래스의 선언이 있는 헤더 파일을 포함합니다.

void Calculator::run(){
    cout << " 두개의 수를 입력하세요";  //사용자에게 입력을 요청하는 메시지를 출력합니다.
    int a, b;                   //두 개의 정수를 저장할 변수를 선언합니다.
    cin >> a >> b;              //정수 두개 입력 
    Adder adder(a, b);          //덧셈기 생성 + 매개변수로 전달해서 생성
    cout << adder.process();    //덧샘 계산 + 결과를 출력
}