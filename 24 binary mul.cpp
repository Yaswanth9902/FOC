#include <stdio.h>
 int bproduct(int, int);
 int main()
{
 
    long b1, b2, mul = 0;
    int digit, fact = 1;
 
    printf("Enter the first binary number: ");
    scanf("%ld", &b1);
    printf("Enter the second binary number: ");
    scanf("%ld", &b2);
    while (b2 != 0)
    {
        digit =  b2 % 10;
        if (digit == 1)
        {
            b1 = b1 * fact;
            mul = bproduct(b1, mul);
        }
        else
            b1 = b1 * fact;
        b2 = b2 / 10;
        fact = 10;
    }
    printf("Product of two binary numbers: %ld", mul);
    return 0;
}
    int bproduct(int b1, int b2)
{
    int i = 0, r = 0, sum[20];
    int bprod = 0;
 
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
    while (i >= 0)
        bprod = bprod * 10 + sum[i--];
    return bprod;
}