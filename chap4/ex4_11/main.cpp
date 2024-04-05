#include <iostream>
#include <string>
using namespace std;

int main(void) {
    //스트링생성
    string str;
    string address("세종시 달빛1로 158");
    string copyAddress(address);

    char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
    string title(text);

    //스트링출력
    cout << str << endl;
    cout << address << endl;
    cout << copyAddress << endl;
    cout << title << endl;

    return 0;
}