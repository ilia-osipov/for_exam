#include <stdio.h>
#define MAX 1000

int main() {
int i, n;
int mass[MAX];
int next = 0;

for(i = 0; mass[i-1] != -1; i++) {
if(scanf("%d", &n) == 1) {
    mass[i] = n;
    } else {
    printf("n/a");
    next = 1;
    break; }
}

i -= 1;
if(next == 0) {
    int min = 0;
int max = 0;
for (int j = 0; j < i; j ++) {
    if (mass[j] < mass[min])
    min = j;
    if (mass[j] > mass[max])
    max = j;
}
int tmp = mass[max];
mass[max] = mass[min];
mass[min] = tmp;

for (int j = 0; j < i; j++) {
    printf("%d ", mass[j]);}
}
}
