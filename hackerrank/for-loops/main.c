#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* get_int_to_word(int i) {
    char outty[10];
    switch(i) {
            case 1:
                return "one";
            case 2:
                return "two";
            case 3:
                return "three";
            case 4:
                return "four";
            case 5:
                return "five";
            case 6:
                return "six";
            case 7:
                return "seven";
            case 8:
                return "eight";
            case 9:
                return "nine";
        }
    return "too big";
}

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

    for(int i = a; i <= b; i++) {
        if(i < 10) {
            printf("%s\n", get_int_to_word(i));
        }
        else if (i % 2 == 0){
            printf("%s\n", "even");
        }
        else {
            printf("%s\n", "odd");
        }
    }

    return 0;
}