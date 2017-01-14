#include <stdio.h>

long sum(long i) {
    long total = 0;
    while (i-->0) total+=i;
    return total;
}
long prod(long i) {
    long total = 1;
    while (i-->0) total*=i;
    return total;
}
int fact(int i)
{
    if (i == 0 ) return 1;
    else return i*fact(i-1);
}
int main(void)
{
    printf("Fact: %d\n", fact(10));
    printf("Sum: %d\n", sum(10));
    printf("Product: %d\n", prod(10));
    return 0;
}
