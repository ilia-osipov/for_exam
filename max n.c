#include <stdio.h>

int main () {
int number;
int c;
int max = 0;

if(scanf("%d", &number) == 1) {
   
    while(number > 0)
    {
        c = number % 10;
        if (c > max) {
            max = c;
        }
        number /= 10;
    }
   
        printf("%d", max);
} else {
    printf("n/a");
}
}
