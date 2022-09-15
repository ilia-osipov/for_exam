#include <stdio.h>

int main () {
    int a, b, c, d;
int max;
scanf("%d", &a);
b = (a/100) % 10;
c = (a/10) % 10;
d = a % 10;

max = b;
if(c > max) {
    max = c;
}
if(d > max) {
    max = d;
}
printf("%d", max);


}
