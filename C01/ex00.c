//////////////////////////////////
/*      >>>>>>>>                */
/*                              */
/*                              */
/*      >>>>>>   Piscine 42.TR  */
/*      >>        42 Istanbul   */
/*      >>                      */
/*      >>>>>>>>                */
////////////////////////////////////////////////////////////////////
/*      >>>>>>>>                */
/*                              */
/*                              */
/*      >>>>>>   Piscine 42.TR  */
/*      >>        42 Istanbul   */
/*      >>                      */
/*      >>>>>>>>                */
//////////////////////////////////
#include<stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;

    a = 1;
    printf("Önce: %d\n", a);
    ft_ft(&a);
    printf("Sonra: %d\n", a);
}