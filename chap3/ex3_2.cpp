#include <iostream>
using namespace std;

class Circle{
public:
    int radius;             //맴버변수(속성,정보)
    
    Circle();               //생성자함수 - 클래스이름이랑똑같이 만들어 주는것
    Circle(int r);          //매개변수 있는 생성자 함수
    
    double getArea(void);   //맴버함수(행동, 행위위)
};

//클래스 구현
//생성자 함수 : 객체가 생성될 때 자동으로 호출되는 함수
Circle::Circle(){       //생성자 함수의 정의
    radius = 1;         //변수 초기화 
    cout << " 반지름" << radius << " 원 생성" << endl;
}
Circle::Circle(int r) {
    radius = r;
    cout << " 반지름" << radius << " 원 생성" << endl;

}


//원의 면적을 계산하는 맴버함수의 구현
double Circle::getArea(void) 
{
    return 3.14*radius*radius;  //원의 면적을 계산하여 반환
}

int main() {
    //Circle 객체생성 및 초기화
    Circle donut(1);
    donut.radius = 1;
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    //또 다른 Circle 객체생성 밒 초기화
    Circle pizza(30);
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

return 0;
}
