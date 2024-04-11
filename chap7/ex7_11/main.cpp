#include <iostream>
using namespace std;

class Power;
Power sum(Power a, Power b);
Power operator+(int op1, Power op2);

class Power{
    int kick;
    int punch;
    
public:
    Power(int kick=0, int punch=0){this->kick = kick; this->punch = punch;}
    void show();    
    bool operator!();
    friend Power sum(Power op1, Power op2);
    friend Power operator+(int op1, Power op2);
};

Power::Power(int kick, int punch){
    this->kick = kick;
    this->punch = punch;
}

void Power::show(){
    cout << "kick = " << kick << ',' << "punch = " << punch << endl;
}
bool Power::operator!(){
    if((kick == 0) && (punch == 0))
        return true;
    else
        return false;
}
int main(void) {
    Power a(3,5), b;
    a.show();
    b.show();
}

Power sum(Power a, Power b){
    Power tmp;
    tmp.kick = a.kick + b.kick;
    tmp.punch = a.punch + b.punch;
    return tmp;
}

Power operator+(int op1, Power op2){
    Power tmp;
    tmp.kick = op1 + op2.kick;
    tmp.punch = op1 + op2.punch;
    return tmp;
}