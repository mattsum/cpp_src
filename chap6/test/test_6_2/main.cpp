#include <iostream>
using namespace std;

class Person{
    int id;
    double weight;
    string name;
public:
    // Person();
    // Person(int id, string name);
    Person(int id, string name, double weight);
    Person(int id, double weight);
    Person(string name, double weight);
    void show() { cout << id << ' ' << weight << ' ' << name << endl; }

};
// Person::Person() {
//     this->id = 1; this->name = "Grace"; this->weight = 20.5;
// }

// Person::Person(int id, string name) {
//     this->id = id; this->name = name; this->weight = 20.5;
// }
Person::Person(int id = 1, string name = "Grace", double weight = 20.5) {
    this->id = id; this->name = name; this->weight = weight;
}

Person::Person(int id, double weight){
    this->id = id; this->weight = weight; this->name = "Grace";
}

Person::Person(int id,string name ="Grace", double weight = 20.5){
    this->id = id; this->weight = weight; this->name = "Grace";
}
int main(void) {
    Person /*grace,*/ ashley(2, "Ashley"), helen(3, "Helen", 32.5), Minwoo(4, 42.5), Jinho("Jinho", 23.5);
    //grace.show();
    ashley.show();
    helen.show();
    Minwoo.show();
    Jinho.show();

    return 0;
}