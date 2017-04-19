#include<stdio.h>

void displayBits(unsigned int value);
void setbit(unsigned int *value, int position);
void togglebit(unsigned int *value, int position);

int main(void){
    unsigned int x;
    printf("Give an integer value: ");
    scanf("%u", &x);

    displayBits(x);
    setbit(&x, 31);
    displayBits(x);
    togglebit(&x,20);
    displayBits(x);
}

void setBits(unsigned int value){
    unsigned int mask = 1<<pos;
    *value = *value 

    for(i=1;i<=32;i++){
        putchar( value&displayMask ? '1':'0');
        value = value << 1;
        if(i%8==0) putchar(' ');
    }
    puts("");
}
