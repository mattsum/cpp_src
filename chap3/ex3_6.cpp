#include <iostream>
using namespace std;
//선언
class Rectangle{
public:
    int width, height;
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int length);
    bool isSquare();
};  // 선언에는 무조건 ; 세미콜론으로 닫아주기

Rectangle::Rectangle(){
    width = height = 1;
}
Rectangle::Rectangle(int w, int h) {
    width = w; height = h;
}
Rectangle::Rectangle(int length){
    width = height = length;
}

bool Rectangle::isSquare(){
    if(width == height) return true;
    else return false;
}

int main(void) {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}