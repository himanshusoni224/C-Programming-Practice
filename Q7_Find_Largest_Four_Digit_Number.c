#include<stdio.h>

int main(){
    int a,b,c,d;
     printf("enter first number");
     scanf("%d", &a);

     printf("enter second number");
     scanf("%d", &b);

     printf("enter third number");
     scanf("%d", &c);

     printf("enter fourth number");
     scanf("%d", &d);

     if(a > b && a > c && a > d){
        printf("a is largest number \n");
     }
     else if(b > a && b > c && b > d){
        printf("b is largest number \n");
     }
     else if(c > a && c > b && c > d){
        printf("c is largest number \n");
     }
     else if(d > a && d > b && d > c){
        printf("d is largest number \n");
     }
     else{
        printf("all number are equal");
     }

   
return 0;
}
