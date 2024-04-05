#include<iostream>
using namespace std;

//클래스 선언 [C로따지면 약간 int 선언해주는거랑 비슷함]
class TV{
public:
    bool on;    //true on, false off
    int channel;
    int volume;
    int chan;
    void powerOn();
    void powerOff();
    void increaseChannel();
    void decreaseChannel();
    void increaseVolume();
    void decreaseVolume();
};
//클래스 구현
TV::TV(void){
    on = false;
    channel = 0;
    volume = 0;
}
TV::TV(int chan){        //채널값을 갖는 생성자
    on = false;
    channel = chan;
    volume = 0;
}
void TV::powerOn(){
    on = true;
}
void TV::powerOff(){
    on = false;
}
void TV::increaseChannel(){
    channel = channel + 1;
}
void TV::decreaseChannel(){
    channel = channel - 1;
}
void TV::increaseVolume(){
    volume = volume + 1;
}
void TV::decreaseVolume(){
    volume = volume - 1;
}

//객체 생성
int main(void){
    //LG 객체는 생성시에 채널을 10으로 설정.
    //SAMSUNG 객체는 생성시에 채널을 100번으로 설정. 
    TV SAM(100), LG(10);
    cout << " 삼성티비 채널은 " << SAM.channel << " 입니다." << endl;
    cout << " LG티비 채널은 " << LG.channel << " 입니다." << endl;
    // TV samsung, LG; 
    
    // LG.increaseChannel();

    // printf("%d\n", LG.channel);

    // return 0;
}