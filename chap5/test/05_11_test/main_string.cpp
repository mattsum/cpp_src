#include <iostream>
#include <string>
using namespace std;
//선언
class Book{
    char *title;
    char *author;
    int price;
    int pages;

public:

    Book(const char* title, int price);
    Book(const char* title, char *author, int price, int pages);
    ~Book();
    Book(Book &c);
    void set(const char *title, int price);
    Book set(const char *title, const char *author, int price, int pages);
    void show() {
        cout << title << ' ' << price << "원" << endl;
        cout << author << ' ' << pages << "페이지" << endl;
        }
};

//구현 - 복사생성자 +동적할당 {포인터기에...}
Book::Book(const char* title, int price){
    int len1 = strlen(title);
    this->title = new char[len1+1];
    strcpy(this->title, title);
    this->price = price; 
}

Book::Book(const char* title, char *author, int price, int pages){
    int len2 = strlen(author);
    this->author = new char[len2+1];
    strcpy(this->author, author);
    this->price = price, this->pages = pages;
}
//구현 - 소멸자
Book::~Book(){
    if(title) delete [] this->title;
    if(author) delete [] this->author;
}
//구현 - 복사생성자 + 동적할당
Book::Book(Book &c){
    int len1 = strlen(c.title);
    int len2 = strlen(c.author);
    this->title = new char[len1+1];
    this->author = new char[len2+1];
    strcpy(this->title, c.title);
    strcpy(this->author, c.author);
    this->price = c.price;
    this->pages = c.pages;
}
//구현 -  타이틀, 가격
void Book::set(char *title, int price){
    if(title) delete [] this->title;
    int len1 = strlen(title);
    this->title = new char[len+1];
    strcpy(this->title, title);
        
    this->price = price;
}//구현 - 저자, 페이지
Book::Book set(char *title, char *author, int price, int pages){
    if(author) delete [] this->author;
    int len2 = strlen(author);
    this->author = new char[len+1];
    strcpy(this->author, author);
    
    this->pages = pages;
}
//메인
int main(void){
    Book cpp("명품C++", "황기태", 10000, 696);
    Book java = cpp;
    Book test = java.set("명품Java", "홍길동", 12000, 800);
    cpp.show();
    java.show();
}