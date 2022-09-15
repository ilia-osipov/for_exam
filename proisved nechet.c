#include <stdio.h>


int main () {
int number;
int sum = 1;
int c;
int ch = 0;

if(scanf("%d", &number) == 1) {
   
    if(number < 0) {
        number *= -1;
    }
    while(number > 0)
    {
        c = number % 10;
        if (c%2 != 0) {
            sum *= c;
            ch++;
        }
        number /= 10;
    }
    if(ch == 0) {
        printf("%d", 0);
    }
    else {
    printf("%d", sum);
    }
} else {
    printf("n/a");
}
}
