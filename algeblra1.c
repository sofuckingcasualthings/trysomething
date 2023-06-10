#include <stdio.h>
#include <math.h>
// функция возводит число х в степень у. по умолчанию все алгебраическе штуки типа дабл
int main(void)
{
    double x = 2.0, y = 5.0, res;
    res = pow(x, y);
    printf("%f", &res);
    return 0;
}