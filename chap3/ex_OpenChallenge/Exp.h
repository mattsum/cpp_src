#ifndef EXP_H
#define EXP_H
#include <cmath>

class Exp {
public:

	//맴버 변수
	int base;
	int exp;
	int result;

	//맴버 함수
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp base);

	//생성자, 소멸자 - 생성자의이름은 클래스와 동일하다.
	Exp();
	Exp(int base);
	Exp(int base, int exp);
};

#endif