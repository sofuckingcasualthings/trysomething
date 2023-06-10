#include <stdio.h>
/*На вход программы поступает целое трёхзначное число.
Напишите программу, которая выводит сумму цифр этого числа.*/
int main(void)
{
    int total, res;
    int a, b, c;
    scanf("%d", &total);

    a = total % 10;
    b = (total / 10) % 10;
    c = total / 100;
    res = a + b + c;

    printf("%d,", res);
    return 0;
}