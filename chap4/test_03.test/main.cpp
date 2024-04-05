#include <iostream>
#include <string>
using namespace std;

int main(void) {
    //변수 선언
	string str;         //입력 문자열을 저장할 변수
	int cnt = 0;        //a 개수를 저장할 변수

    //문자열 입력
    cout << "문자열 입력>> ";
    getline(cin, str, '\n');
    //cout << str << endl;

    //a 문자열 찾기
    //1. 일바적인 방법
    // for(int i=0; i<str.length(); i++) {
    //     if(str.at(i) == 'a') count++;
    // }

    //2. string의 find 함수를 이용하는 방법
    int pos = -1;
    while(1){
        pos = str.find('a', pos+1);
        cout << pos << endl;   
        
        if(pos != -1){cnt++; pos++;}
        else{
            break;    
        }
    }
    cout << "문자  a는" << cnt << "개" << endl;
}