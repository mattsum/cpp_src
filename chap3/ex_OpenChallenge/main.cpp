#include <iostream>
using namespace std;

#include "Exp.h"

int main(void) {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << " a의 베이스 " << a.getBase() << ' ,' << " 지수 " << a.getExp() << endl;

	if (a.equal(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;

	return 0; //안써줘도 구현되지만, 그래도 완벽함을 위해 Return 0;를 써주는게 좋다.
}