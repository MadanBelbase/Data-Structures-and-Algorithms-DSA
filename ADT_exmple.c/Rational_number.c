#include<stdio.h>

struct rational {
    int num;
    int den;
};

struct rational sum(struct rational a, struct rational b) {
    struct rational c;
    c.num = a.num * b.den + b.num * a.den;
    c.den = a.den * b.den;
    return c;
}

int main() {
    struct rational x, y, z;
    printf("Enter the numerator and denominator for the first rational number: ");
    scanf("%d%d", &x.num, &x.den);
    printf("Enter the numerator and denominator for the second rational number: ");
    scanf("%d%d", &y.num, &y.den);
    
    z = sum(x, y);
    
    printf("The sum is %d/%d\n", z.num, z.den);
    
    return 0;
}
