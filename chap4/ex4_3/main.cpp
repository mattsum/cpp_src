#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; } 
    void setRadius(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main(void) {
    Circle circleArray[5] = { Circle(10), Circle(20), Circle()};      //(1) Circle 객체를 3개 생성하고 초기화
    int circleArraySize = sizeof(circleArray) / sizeof(circleArray[0]);  //(2) 원소 객체의 개수를 저장

    cout << circleArraySize << endl;

    //배열의 각 원소 객체의 멤버 접근
    for (int i = 0; i < (sizeof(circleArray)/sizeof(Circle)); i++)
        cout << "Circle " << i << " 의 면적은 " << circleArray[i].getArea() << endl;

return 0;
}
