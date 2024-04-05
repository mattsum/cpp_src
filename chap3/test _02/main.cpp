#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
//Class 선언
class Date{
// private:
// vector<string> split(string str, char Delimiter);

public:
    int year;
    int month;
    int day;
    vector<string> split(string str, char Delimiter);
//함수
    void show();
    int getYear();
    int getMonth();
    int getDay();
//생성자
    Date(int y, int m, int d);
    Date(string a);
};

vector<string> Date::split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼 
    vector<string> result;              
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);       // 절삭된 문자열을 vector에 저장
    } 
    return result;
}
Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
Date::Date(string a){
    vector<string> result = split(a, '/');  //

    year = stoi(result[0]);     //stoi 스트링을 숫자로 바꿔줘라.
    month = stoi(result[1]);
    day = stoi(result[2]);
    cout << year << '.' << month << '.' << day << endl;
}
int Date::getYear(void){ 
    return year; 
    }
int Date::getMonth(void){ 
    return month; 
    }
int Date::getDay(void){ 
    return day; 
    }
void Date::show(void){
    cout << year << " 년" << month << " 월" << day << " 일" << endl;
}

int main(void)
{
    Date birth(2014, 3, 20);
    birth.split("2024/10/31", '/');
    Date independenceDay("1945/ 8/ 15");
    independenceDay.show();
    cout << birth.getYear() << '.' << birth.getMonth() << '.' << birth.getDay() << endl;
}
