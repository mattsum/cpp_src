#include <iostream>
#include <string>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    //Power();
    Power(int kick=0, int punch=0);
    Power operator+ (Power op2);
    Power operator+ (int op2);
    Power operator- (Power op2);
    Power operator* (Power op2);
    Power operator/ (Power op2);
    Power operator+=(Power op2);
    void show();    
    friend Power sum(Power a, Power b);
    bool operator== (Power op2);
    
};

// Power::Power(){
//     this->kick = 0;
//     this->punch = 0;
// }

Power::Power(int kick, int punch){
    this->kick = kick;
    this->punch = punch;
}

Power Power::operator+ (Power op2){
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

Power Power:: operator+ (int op2){
    Power tmp;
    tmp.kick = this->kick + op2;
    tmp.punch = this->punch + op2;
    return tmp;
}

Power Power::operator- (Power op2){
    Power tmp;
    tmp.kick = this->kick - op2.kick;
    tmp.punch = this->punch - op2.punch;
    return tmp;
}

Power Power::operator* (Power op2){
    Power tmp;
    tmp.kick = this->kick * op2.kick;
    tmp.punch = this->punch * op2.punch;
    return tmp;
}

Power Power::operator/ (Power op2){
    Power tmp;
    tmp.kick = this->kick / op2.kick;
    tmp.punch = this->punch / op2.punch;
    return tmp;
}

Power Power::operator+=(Power op2){
    this->kick = this->kick + op2.kick;
    this->punch =this->punch + op2.punch;
    return *this;
}

bool Power::operator== (Power op2){
    if(this->kick == op2.kick && this->punch == op2.punch)
        return true;
    else
        return false;
}


void Power::show(){
    cout << "kick = " << kick << ',' << "punch = " << punch << endl;
}

int main(void){
    Power a(3,5), b(4,6), c, d, e;
    // c = sum(a,b);
    //c = a.sum(b); //맴버함수
    c = a+b;
    d = a-b;
    a += b;
    e = a;

    a.show();
    b.show();
    c.show();
    d.show();
    e.show();


    if(a == b) cout << "두 파워가 같다." << endl;
    else cout << "두 파워가 같지 않다." << endl;

    return 0;
}
// Power sum(Power a, Power b){
//     Power result;
//     result.kick = a.kick + b.kick;
//     result.punch = a.punch + b.punch;
//     return result;
// }

