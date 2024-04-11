#include <iostream>
#include <string>
using namespace std;
class Book;
// void operator += (Book &a, int op2);
// void operator -= (Book &a, int op2);

class Book{
    string title;
    int price, pages;

public:
    Book(string title = "", int price = 0, int pages = 0){
        this->title = title;
        this->price = price;
        this->pages = pages;
        bool operator == (int price);
        bool operator == (string Title);
        bool operator == (Book op2);
    }

    string getTitle(void) {return title;}
    // friend Book sum(Book op1, Book op2);
    // friend Book operator+(int op1, Book op2);
};
string Book::getTitle(void) {return title;}

//일반함수 선언
// Book operator += (Book &a, int op2);
// Book operator -= (Book &a, int op2);

bool Book::operator == (int op2) {
    if(this->price == op2)
        return true;
    else
        return false;
}
bool Book::operator == (int price){
    if (this->price == price)
        return true;
    else
        return false;
}
bool Book::operator == (string Title){
    if (this->title == Title)
        return true;
    else
        return false;
}
bool Book::operator == (Book op2){
    if ((this->title == op2.title)) && ((this->price == op2.price)) && ((this->pages == op2.pages))
        return true;
    else
        return false;
}
int main(void){
    
    //1.번 실습문제에 대한 메인
    // Book a ("청춘", 20000, 300), b("미래", 30000, 500);     
    // a += 500;
    // b -= 500;
    // a.show();
    // b.show();

    //2.실습문제
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    if(a == 30000) cout << "정가 30000원" << endl;
    if(a == "명품 C++") cout << "명품 C++입니다." << endl;
    if(a == b) cout << "두 책이 같은 책입니다." << endl;

    return 0;
}



// void show(void) 
//     {cout << title << ", " << price << "원" << pages << "페이지" << endl;}

// Book operator += (Book &a, int op2) {
//         a.price =  a.price + op2;
//     }
// Book operator -= (Book &a, int op2) {
//         a.price = a.price - op2;
//     }
