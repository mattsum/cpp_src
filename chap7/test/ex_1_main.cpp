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
};



int main(void){
    Book a ("청춘", 20000, 300), b("미래", 30000, 500);     
    a += 500;
    b -= 500;
    a.show();
    b.show();

    return 0;
}