#include <iostream>
#include <string>
using namespace std;

class Book{
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0){
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show(void) 
    {cout << title << ", " << price << "원" << pages << "페이지" << endl;}

    string getTitle(void) {return title;}

    void operator += (int op2) {this->price += op2;	}
    void operator -= (int op2) {this->price -= op2; }

    friend bool operator<(string title, Book book);
    
};
bool operator<(string title, Book book) { return title < book.title; }

int main(void){
    Book a("청춘", 20000, 300);
    string b;
    cout << "팩 이름을 입력하세요 >>"
    getline(cin, b);
    if(b < a)
        cout << a.getTitle() << "이 " << b << " 보다 뒤에 있구나!" << endl;


    return 0;
}