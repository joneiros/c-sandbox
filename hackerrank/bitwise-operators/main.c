#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int andmax = 0, ormax = 0, xormax = 0, tmp = 0;
  for(int i=1; i <= n; i++) {
    for(int m=i+1; m<=n; m++) {
        //printf("%d %s %d\n", i, "and", m);
        tmp = i&m;
        //printf("%d ", tmp);
        if(tmp > andmax && tmp < k) {
            andmax = tmp;
        }

        tmp = i|m;
        //printf("%d ", tmp);
        if(tmp > ormax && tmp < k) {
            ormax = tmp;
        }

        tmp = i^m;
        //printf("%d\n\n", tmp);
        if(tmp > xormax && tmp < k) {
            xormax = tmp;
        }
    }
  }

  printf("%d\n%d\n%d\n", andmax, ormax, xormax);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}