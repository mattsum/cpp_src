#include <iostream>
using namespace std;

void half(double *n) //
{
    *n = *n / 2.0;
    cout << *n << endl;
}
void half(double &n) //
{
    n = n / 2.0;
    cout << n << endl;
}
int main(void) {
    double n=20;
    half(n);
    cout << n << endl;;
    return 0;
}