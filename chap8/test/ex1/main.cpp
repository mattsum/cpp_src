#include <iostream>
#include <string>
using namespace std;

class Circle{
protected:
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};

class NamedCircle : public Circle{
    string name;
public:
    NamedCircle(int radius, string name);
    void show();
};
NamedCircle::NamedCircle(int radius, string name){
    this->radius = radius;
    this->name = name;
}
    
    
void NamedCircle::show(){
    cout << "반지름이 " << this->radius << "인 " << name << endl;
}

int main(void){
    NamedCircle waffle(3, "waffle");
    waffle.show();
    
    return 0;
}