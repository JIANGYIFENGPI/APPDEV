#include<stdio.h>

void displayBits(unsigned int value);

int main(void){
    unsigned int x;
    printf("Give an integer value: ");
    scanf("%u", &x);

    displayBits(x);
}

void displayBits(unsigned int value){
    int i;
    unsigned int displayMask = 1<<31;
    printf("%10u = ",value);

    for(i=1;i<=32;i++){
        putchar( value&displayMask ? '1':'0');
        value = value << 1;
        if(i%8==0) putchar(' ');
    }
    puts("");
}