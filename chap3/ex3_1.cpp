#include <iostream>
using namespace std;

//클래스 선언
class Circle{
public:
    int radius;             //맴버 변수 (속성, 정보)
    double getArea();       //맴버 함수 (행동, 행위)
};                          //C++에서는 여기서 ; 세미콜론을 써줘야한다.

//클래스 구현
double Circle::getArea() 
{
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    donut.radius = 1;
    double area  = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    return 0;
}