#include<iostream>
using namespace std;

//선언
class PrivateAccessError
{
private:        //생성자는 무조건 PUBLIC; 
    void f();
public:
    int a;
    int b;
    PrivateAccessError();
    PrivateAccessError(int x);
    
    void g();
};

PrivateAccessError::PrivateAccessError(/* args */)
{
    a = 1;
    b = 1;
}
PrivateAccessError::PrivateAccessError(int x)
{
    a = x;
    b = x;
}
void PrivateAccessError::f()
{
    a = 5;
    b = 5; 
}
void PrivateAccessError::g()
{
    a = 6;
    b = 6; 
}


int main(void){
    PrivateAccessError objA;
    PrivateAccessError objB(100);

    objA.a = 10;
    objB.a = 100;

    return 0;
}