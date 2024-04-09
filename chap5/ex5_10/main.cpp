#include <iostream>
#include <cstring>
using namespace std;

class Person{
    int id;
    char* name;
public:        
    Person(int id, const char *name);
    Person(const Person &c);
    ~Person();
    void changeName(const char *name);
    void show() { cout << id << ',' << name << endl; }
};
Person::Person(int id, const char *name){
    this->id = id;
    int len = strlen(name);     //strlen은 NULL 문자를 포함하지 않는다.
    this->name = new char[len+1];
    strcpy(this->name, name);
}

//복사 생성자 작성 
Person::Person(const Person &c){
    this->id = c.id;
    int len = strlen(c.name);
    this->name = new char[len+1];
    strcpy(this->name, c.name);
}


Person::~Person(){          //소멸자 함수 구현
    if(name) delete[] this->name;
}
void Person::changeName(const char *name){
    if(strlen(name) > strlen(this->name)) return;
    strcpy(this->name, name);
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