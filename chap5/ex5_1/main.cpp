#include <iostream>
using namespace std;
//선언시작
class Circle {
private:
    int radius;
public:
    Circle();       //기본생성자
    Circle(int r);  //매개변수가 있는 생성자
    ~Circle();      //소멸자
    double getArea() {return 3.14*radius*radius; }
    int getRadius() {return radius; }
    void setRadius(int radius) { this->radius = radius; }
};

// 기본 생성자
Circle::Circle() {
    radius = 1; // 반경을 기본값으로 초기화
    // cout << "생성자 실행 radius = " << radius << endl; // 생성자 실행 메시지
}

// 매개변수가 있는 생성자
Circle::Circle(int radius) {
    this->radius = radius; // 매개변수로 받은 반경으로 초기화
    // cout << "생성자 실행 radius = " << radius << endl; // 생성자 실행 메시지
}

// 소멸자
Circle::~Circle() {
    // cout << "소멸자 실행 radius = " << radius << endl; // 소멸자 실행 메시지
}

// 값에 의한 호출 함수
void increase(Circle c) {
    int r = c.getRadius(); // 전달된 Circle 객체의 반경을 가져옴
    c.setRadius(r + 1); // 반경을 1 증가시킴
}

int main() {
    Circle waffle(30); // 반경이 30인 Circle 객체 생성
    increase(waffle); // increase 함수에 waffle 객체 전달 (값에 의한 호출)

    cout << waffle.getRadius() << endl; // waffle 객체의 반경 출력
}