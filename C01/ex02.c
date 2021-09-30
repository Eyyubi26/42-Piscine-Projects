//////////////////////////////////
/*      >>>>>>>>                */
/*                              */
/*                              */
/*      >>>>>>   Piscine 42.TR  */
/*      >>        42 Istanbul   */
/*      >>                      */
/*      >>>>>>>>                */
//////////////////////////////////
#include<stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a;
    int b;

    a = 4;
    b = 8;
    printf("Öncesi: %d %d\n", a, b);
    ft_swap(&a, &b);
    printf("Sonrası: %d %d\n", a, b);
}