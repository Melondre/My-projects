#include <stdio.h>

int main(void)
{
    float a;
    printf("a:");
    scanf_s("%f", &a);

    printf("%f\n", (a * 180) / 3.14);

    return 0;
}
