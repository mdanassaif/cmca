#include <stdio.h>
int main() {
    char a,b;
    printf("Enter any two charachter \n");
    scanf("%c %c", &a, &b);   

    printf("----Sum character and as number = %d\n", a+b);
    printf("----Sum character and as ASCII according to sum of number = %c\n", a+b) ; 
}