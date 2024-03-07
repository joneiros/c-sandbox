#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int digitSum =0, modBy = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(int i=0; i < 5; i++) {
        modBy = (n/10)*10; //replaces last digit with 0
        digitSum +=  (n >= 10 ? n%(modBy): n);
        n= n/10;
    }

    printf("%d\n", digitSum);

    return 0;
}