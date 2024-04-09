#include <iostream>
using namespace std;

int add(int *pa, int num){
    int sum = 0;
    for(int i=0; i<num; i++){
        sum += *(pa+i);
    }
    return sum;
}

int add(int *pa, int num, int *pb){
    int sum = 0;
    for (int i=0; i<num; i++){
        sum += *(pa+i) + *(pb+i);
    }
    return sum;
}
// ------------------------- call by reference ------------------------ //
// int add(int a[], int num){
//     int sum = 0;
//     for(int i=0; i<num; i++){
//         sum += a[i];
//     }
//     return sum;
// }
// int add(int a[], int num, int b[]){
//     int sum = 0;
//     for(int i=0; i<num; i++){
//         sum += a[i] + b[i];
//     }
//     return sum;
// }
// ------------------------- call by reference ------------------------ //
int main (void){
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c = add(a, 5);
    int d = add(a, 5, b);
    cout << c << endl;
    cout << d << endl;

    return 0;
}