// Написать программу, осуществляющую перестановку крайних цифр в целом трёхзначном числе. Целое трехзначное число 
// задается на стандартном потоке stdin, результат перестановки выводить в виде трёхзначного числа с учетом ведущих 
// нулей на стандартный поток вывода stdout . В конце не должно быть переноса на новую строку. Гарантируется , что на 
// вход программе подаётся целое трехзначное число. Примеры: ввод 159, вывод 951; ввод 120, вывод 021. Также, 
// проверить на утечку памяти.

#include <stdio.h>

int main () {
    int a, b, c, d;

scanf("%d", &a);
b = (a/100) % 10;
c = (a/10) % 10;
d = a % 10;

printf("%d%d%d", d, c, b);
}
