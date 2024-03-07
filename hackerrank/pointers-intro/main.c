#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int absum, ababs;
    absum = *a + *b;
    ababs = abs(*a - *b);
    *a = absum;
    *b = ababs;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}