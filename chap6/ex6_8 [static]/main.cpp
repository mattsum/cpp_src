#include <iostream>
using namespace std;

class Person {
public:
    int money;
    void addMoney(int Money) {
        this -> money += money;
    }
    static int sharedMoney;
    static void addShared(int n) {
        sharedMoney += n;
    }
};
int Person::sharedMoney = 10;

void Person::addMoney(int Money) {
    this -> money += money;
}
void Person::addShared(int n) {
    sharedMoney += n;
}
int main(void){
    cout << Person::sharedMoney << endl;
    Person::addShared(100);
    cout << Person::sharedMoney << endl;

    cout << "-------------------------------------------------" << endl;
    Person han;
    han.money = 100;
    han.sharedMoney = 200;
    cout << han.sharedMoney << endl;
    cout << Person::sharedMoney << endl;

    Person lee;
    lee.money = 150;
    lee.sharedMoney(200);
    lee.addShared(200);




    return 0;
}