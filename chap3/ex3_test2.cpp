#include<iostream>
using namespace std;
//선언
class Tower {
public:
    int height = 0;
    int getHeight();
    Tower();
    Tower(int h);
    ~Tower();       //소멸자
};

//구현
int Tower::getHeight(void){
    return height;
}
Tower::Tower(void){
    height = 1;
}
Tower::Tower(int h){
    height = h;
}
Tower::~Tower(void){
    cout << " 소멸자가 호출되었습니다. " << endl;
}

//생성
int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터 " << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터 " << endl;

}