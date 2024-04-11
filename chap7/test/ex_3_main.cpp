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

    bool operator!() { return this->price == 0; }
};


int main(void){
    Book book("벼룩시장", 0, 50);   //가격은 0
    if(!book)
    cout << "공짜다" << endl;

    return 0;
}