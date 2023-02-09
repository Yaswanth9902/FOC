#include <stdio.h>
 int main()
{
 
    long b1, b2;
    int i = 0, r = 0, sum[20];
 
    printf("Enter the first b number: ");
    scanf("%ld", &b1);
    printf("Enter the second b number: ");
    scanf("%ld", &b2);
    while (b1 != 0 || b2 != 0)
    {
        sum[i++] =(b1 % 10 + b2 % 10 + r) % 2;
        r =(b1 % 10 + b2 % 10 + r) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (r != 0)
        sum[i++] = r;
    --i;
    printf("Sum of two b numbers: ");
    while (i >= 0)
        printf("%d", sum[i--]);
    return 0;
}