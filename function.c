#include <stdio.h>

int sum()
{
    int a, b;
    a = 100;
    b = 10;
    printf("%d", a + b);
    return 0;
}

int name()
{
    char name[] = "Mahiyuddin";
    printf("My name is %s", name);
    return 0;
}

int line()
{
    printf("\n---------------------------\n");
    return 0;
}

int main()
{
    line();
    printf("The sum of numbers = ");
    sum();
    line();
    name();
    line();
}
