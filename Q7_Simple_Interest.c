#include<stdio.h>

int main(){
    float P,R,T;

    printf("Enter Principal : ");
    scanf("%f", &P);

    printf("Enter Rate : ");
    scanf("%f", &R);

    printf("Enter Time : ");
    scanf("%f", &T);

    printf("Simple Interest = %.2f", (P * R * T) / 100);

return 0;
}
