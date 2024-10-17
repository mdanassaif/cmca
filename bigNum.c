// #include <stdio.h>

// int main() {
//     int num1, num2, num3;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     if (num1 >= num2 && num1 >= num3) {
//         printf("The largest number is %d\n", num1);
//     } else if (num2 >= num1 && num2 >= num3) {
//         printf("The largest number is %d\n", num2);
//     } else {
//         printf("The largest number is %d\n", num3);
//     }

//     return 0;
// }

/////// Above methos with help of if and else condions and below one is with for loop

#include <stdio.h>

int main() {
    int numbers[3];
    int largest;

    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    for (int i = 1; i < 3; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest number is %d\n", largest);

    return 0;
}