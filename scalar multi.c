#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i;
    float res;
    res=0;
    int s = 2; 
    float a[s], b[s];
    
    for(i=0;i<s;i++)
    {
        scanf("%f", &a[i]);
    }
    for(i=0;i<s;i++)
    {
        scanf("%f", &b[i]);
    }
    for (i=0;i<s;i++)
    {
    res+=a[i]*b[i];
    }
    printf("%.2f",res);
}
