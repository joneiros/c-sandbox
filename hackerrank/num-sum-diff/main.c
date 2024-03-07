#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int aint, bint;
    float af, bf;
    scanf("%d %d", &aint, &bint);
    scanf("%f %f", &af, &bf);
    printf("%d %d\n", aint+bint, aint-bint);
    printf("%0.1f %0.1f\n", af + bf, af-bf);
    return 0;
}