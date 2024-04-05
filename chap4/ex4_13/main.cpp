#include <iostream>
#include <string>
using namespace std;

int main(void) 
{
    string s;

    cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다. (NO KOREAN)" << endl;
    getline(cin, s, '\n');      //문자열 입력
    int len = s.length();       //문자열의 길이
    
    for(int i=0; i<len; i++){
        string last = s.substr(len-1, 1);
        string sub = s.substr(0, len-1);
        s = last + sub;
        cout << s << endl;
    }
    return 0;
}