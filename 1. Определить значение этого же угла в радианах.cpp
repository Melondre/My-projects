#include <stdio.h>

int main(void)
{
    float a;
    printf("a:");
    scanf_s("%f", &a);

    printf("%f\n", (a * 3.14) / 180);

    return 0;
}
