#include <stdio.h>

int main(void){
    volatile int a=70;
    char name1[6] = {'T','r','a','c','e'};
    volatile int b=80;
    char name2[5] = {'G','r','a','c','e'};

    int c = a+b;

    printf("name1 : %s \n\r", name1);
    printf("name2 : %s \n\r", name2);
    printf("name1 : %p \n\r", name1);
    printf("name2 : %p \n\r", name2);

    return 0;
}