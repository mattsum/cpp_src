#include <iostream>
#include <string>
using namespace std;

class Person{
    int id;
    string name;
public:        
    Person(int id, const string name);
    Person(const Person &c);
    ~Person();
    void changeName(const string name);
    void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, const string name){
    this->id = id;
    this->name = name;
}

//복사 생성자 작성 
Person::Person(const Person &c){
    this->id = c.id;
    this->name = c.name;
}

Person::~Person(){          //소멸자 함수 구현
}
void Person::changeName(const string name){
    this->name = name;
}
int main(void){
    Person father(1, "Kitae");
    Person daughter(father);

    cout << " daughter 객체 생성 직 후 --- " << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");
    cout << " daughter 이름을 Grace로 변경한 후 --- " << endl;
    father.show();
    daughter.show();
    
    return 0;
}