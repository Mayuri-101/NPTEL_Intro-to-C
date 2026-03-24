#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swap(&a, &b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n", b);

    return 0;
}
