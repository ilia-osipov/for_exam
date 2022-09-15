// Написать программу, к-ая проверяет, что введенная через станд. поток stdin, заканчивающаяся символом новой 
// строки \n, строка является палиндромом без учета регистра. Программа должна выводить на станд. поток вывода 
// stdout строку Yes, если строка являлась палиндромом и No в противном случае. В конце ответа не д.б. переноса на
// новую строку. Пустая строка не является палиндромом. Входная строка может содержать буквы латинского алфавита
// а также цифры. Длина строки не больше 100 символов
// Пример: Mam mam => Yes
//         Test1 => No

#include<stdio.h>
#include <string.h>
#include <ctype.h>
#define N 100 

int main() {
    int f = 0;
    int t = 0;
    char c[N];
char res[N];
    
scanf("%100[^\n\r]", c);
int cLen = strlen(c);
for (int i = 0; i < cLen; i++)
{
   if(c[i]==' ')
    t++;
}
if(t == cLen) {
    f = 1;
}
for(int i = cLen-1; i>=0; i--)
{
if(c[i]!=' ')
res[i]=c[i];
}
for (int i = 0; i < cLen; i++)
{
    res[i] = tolower(c[i]);
}

for (int i = 0; i < cLen / 2; i++)
{
    if (res[i] != res[cLen - 1 - i] ) {
        f = 1;
        break;
    }
     }
     if (f == 1) {
        printf("No");
     } else {
printf("Yes");
     }
return 0;
}
