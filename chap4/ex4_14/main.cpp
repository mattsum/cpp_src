#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    // 사용자로부터 덧셈 문자열을 입력 받음
    cout << "Enter a string representing a series of additions (e.g., 1+2+5+44+55+100):" << endl;
    getline(cin, s, '\n');  //한줄을 읽어서 's'에 저장하는 함수호출이다.
                            //이 함수는 3개의 인자를 갖는다.

    int sum = 0;
    int startIndex = 0;
    // 무한 루프로 문자열을 처리
    while(true){
                            // '+' 기호의 위치를 찾음
        int fIndex = s.find('+', startIndex);
                            // '+' 기호를 찾지 못한 경우
        if(fIndex == -1){
                            // 시작 인덱스부터 문자열의 끝까지를 자름
            string part = s.substr(startIndex);
                            // 만약 자른 부분이 비어있다면 루프를 종료
            if(part == "") break;
                            // 출력하여 확인
            cout << part << endl;
                            // 정수로 변환하여 합에 더함
            sum += stoi(part);
            break;
        }
                // '+' 기호의 위치에서 시작 인덱스를 뺀 만큼의 길이의 문자열을 자름
        int count = fIndex - startIndex;
        string part = s.substr(startIndex, count);

        // 출력하여 확인
        cout << part << endl;
        // 정수로 변환하여 합에 더함
        sum += stoi(part);
        // 시작 인덱스를 '+' 기호 다음으로 설정하여 다음 문자열을 찾을 준비
        startIndex = fIndex + 1;
    }
    // 결과 출력
    cout << "The sum of the numbers is: " << sum;
    
    return 0;
}
