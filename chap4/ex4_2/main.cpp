#include <iostream>
using namespace std;
//클래스 선언
class Circle {
    public:
    int radius;
    Circle();       //생성자 함수
    Circle(int r);  //매개변수가 있는 생성자 함수
    
    double getArea(); //멤버 함수(행동,행위)
    void setRadius(int r); 
};

//----------------------------클래스 구현---------------------------
//생성자 함수 : 객체가 생성될 때 자동으로 실행되는 함수
double Circle::getArea(void) {
    return 3.14*radius*radius;
}

Circle::Circle(void) {
    radius = r;
}
void Circle::setRadius(int r) {
    radius = r;
}

int main(void) {
    Circle circleArray[3];      //(1) Circle 객체를 3개 생성하고 초기화
    //배열의 각 원소 객체의 멤버 접근
    circleArray[0].setRadius(10);   //(2)(radius = 10)를 저장
    circleArray[1].setRadius(20);   //(3)(radius = 20)를 저장
    circleArray[2].setRadius(30);   //(4)(radius = 30)를 저장

    for(int i = 0; i < 3; i++){
        circleArray[i].setRadius(i+10);
    }

    for(int i = 0; i < 3; i++)
        cout << "Circle " << i << " 의 면적은 " << circleArray[i].getArea() << endl;

    Circle *p;
    p = circleArray;
    for(int i = 0; i < 3; i++){
        cout << "Circle " << i << " 의 면적은 " << (p+i)->getArea() << endl;
        //p++;
    }
}