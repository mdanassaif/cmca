#include <stdio.h>

int main() {
int num1;
int num2;
int swapNum;  

printf("Write your favorite disntinct numbers. \n");
scanf("%d %d", &num1, &num2);

printf("\nThe numbers without swapping :\n");
printf("---------------------------------\n");
printf("First Number = %d ", num1);
printf("Second Number = %d", num2);
printf("\n---------------------------------\n\n");
 

swapNum = num1;
num1 = num2;
num2 = swapNum;

printf("\nThe numbers with swapping to each :\n");
printf("---------------------------------\n");
printf("First Number = %d ", num1);
printf("Second Number = %d", num2);
printf("\n---------------------------------");

}