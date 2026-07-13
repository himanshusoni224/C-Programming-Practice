#include<stdio.h>
#include<math.h>
// even - > 1
// odd - > 0

int main(){
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    
    printf("%d", a % 2 == 0);
    return 0;
}    
    
