#include <stdio.h>
/*Напишите программу переводящую угол из градусной меры в радианную.
Формат входных данных:одно целое число A — угол, измеренный в градусах.
Формат выходных данных: вещественное число R — угол, измеренный в радианах.
Точность — два знака после запятой.
Указание: Для числа π=3.1415926*/
int main(void)
{
    int angleC;
    double pi = 3.1415926, angleR;

    scanf("%d", &angleC);
    angleR = angleC * pi / 180;
    printf("%2.2lf", angleR);
    return 0;
}