#include <stdio.h>
int main(void)
{
    int a = 7, b = 2;
    float res;

    res = (float)a / b; // приведение значения, изменение типа
    printf("%d / %d = %f\n", a, b, res);

    return 0;
}