#include <iostream>
#include <string>
using namespace std;

class Point{
protected:
    int x, y;
public:
    void set(int x, int y) { this->x = x; this->y = y; }
    void showPoint() { cout << "(" << this->x << ", " << this->y << ")" << endl; }
    // Point(int x=0, int y=0);
  
};

class ColorPoint : public Point {
    string color;
public:
    void setColor(string color) { this->color = color; }
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint(void){
    cout << color << ": ";
    showPoint();
}
bool ColorPoint::equals(ColorPoint p){
    if( x == p.x && y == p.y && color == p.color)
        return true;
    else
        return false;
}

int main(void){
    Point p;
    p.set(2,3);
    // p.x = 5;         //protected로 선언되었기에 접근 불가
    // p.y = 5;         
    p.showPoint();


    ColorPoint cp;
    // cp.x = 10;       //protected로 선언되었기에 접근불가
    // cp.y = 10;
    cp.set(3,4);
    cp.setColor("Red");

    ColorPoint cp2;
    cp2.set(3,4);
    cp2.setColor("Red");
    cout << ((cp.equals(cp2))? "true" : "false") << endl;
    
    return 0;
}
