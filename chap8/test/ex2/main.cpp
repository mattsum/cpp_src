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
class NamedCircle : public Circle
{
    string name;
public:
    NamedCircle(int radius, string name);
    void setNamedCircle(int radius, string name);
    void show();
};
// public:
//     NamedCircle(int radius, string name);
//     void show();
// };
// NamedCircle::NamedCircle(int radius, string name){
//     this->radius = radius;
//     this->name = name;
// }
NamedCircle::NamedCircle(int radius, string name){
    this->radius = radius;
    this->name = name;
}    
    
void NamedCircle::show(){
    cout << "반지름이 " << Circle::getRadius() << "인 " << name << endl;
}

void NamedCircle::setNamedCircle(int radius, string name){
    this->radius = radius;
    this->name = name;
}
int main(void){
    NamedCircle pizza[5];
    int radius;
    string name;

    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << endl;
    for(int i=0; i < 5; i++){
        cout << i+1 << ">> ";    //i+1 넣는거를 알고있어야한다.
        cin >> radius >> name;
        pizza[i].setNamedCircle(radius, name);
        pizza[i].show();
    }
    cout << "가장 면적이 큰 피자는 블랙홀 피자입니다." << endl;   
    return 0;
}