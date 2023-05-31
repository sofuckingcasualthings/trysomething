#include <stdio.h>
void butler(void);
void butler(void)
{
    printf("вы звонилиили,сэр?\n");
}

int main(void)
{
    printf("вызываю дворецкого\n");
    butler();
    printf("принесите мне чай\n");
    return 0;
}