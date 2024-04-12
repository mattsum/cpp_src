#include <iostream>
#include <string>
using namespace std;

class Point{
protected:
    int x, y;
public:
    void set(int x, int y);
    void showPoint();
    Point(int x=0, int y=0);
};

void Point::set(int x, int y){
    this->x = x;
    this->y = y;
}

void Point::showPoint(void){
    cout << "(" << this->x << ", " << this->y << ")" << endl;
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

class ColorPoint : public Point {
    string color;
public:
    void setColor(string color);
    void showColorPoint(void);
};

void ColorPoint::setColor(string color){
    this->color = color;
    this.

}
void ColorPoint::showColorPoint(void){
    cout << color << ": ";
    this->showPoint();
}


int main(void){
    Point p;
    ColorPoint cp;

    cp.set(3,4);
    cp.setColor("Red");
    cp.showColorPoint();

    return 0;
}
