#include <iostream>
#include <cstring>
using namespace std;

class Book{
    char *title;
    char *author;
    int price;
    int pages;

public:
    Book(const char* title, int price);
    Book(const char* title, const char *author, int price, int pages);
    ~Book();
    Book(const Book &c);
    void set(const char *title, int price);
    void set(const char *title, const char *author, int price, int pages);
    void show();
};

Book::Book(const char* title, int price){
    int len = strlen(title);
    this->title = new char[len+1];
    strcpy(this->title, title);
    this->price = price;
    this->author = nullptr;
    this->pages = 0;
}

Book::Book(const char* title, const char *author, int price, int pages){
    int len_title = strlen(title);
    int len_author = strlen(author);
    this->title = new char[len_title+1];
    strcpy(this->title, title);
    this->author = new char[len_author+1];
    strcpy(this->author, author);
    this->price = price;
    this->pages = pages;
}

Book::~Book(){
    if(title) delete [] this->title;
    if(author) delete [] this->author;
}

Book::Book(const Book &c){
    int len_title = strlen(c.title);
    int len_author = strlen(c.author);
    this->title = new char[len_title+1];
    this->author = new char[len_author+1];
    strcpy(this->title, c.title);
    strcpy(this->author, c.author);
    this->price = c.price;
    this->pages = c.pages;
}

void Book::set(const char *title, int price){
    if(this->title) delete [] this->title;
    int len = strlen(title);
    this->title = new char[len+1];
    strcpy(this->title, title);
    this->price = price;
}

void Book::set(const char *title, const char *author, int price, int pages){
    if(this->title) delete [] this->title;
    if(this->author) delete [] this->author;
    int len_title = strlen(title);
    int len_author = strlen(author);
    this->title = new char[len_title+1];
    strcpy(this->title, title);
    this->author = new char[len_author+1];
    strcpy(this->author, author);
    this->price = price;
    this->pages = pages;
}

void Book::show(){
    cout << "Title: " << title << ", Price: " << price << "원" << endl;
    if(author) cout << "Author: " << author << ", Pages: " << pages << "페이지" << endl;
    else cout << "저자, 페이지" << endl;
}

int main(void){
    Book cpp("명품C++", 10000);
    Book java("명품Java", "홍길동", 12000, 800);
    cpp.show();
    java.show();

    return 0;
}
