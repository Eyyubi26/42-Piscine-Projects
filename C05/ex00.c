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

int ft_iterative_factorial(int nb)
{
    int res;

    res = 1;
    if (nb < 0)
        return (0);
    else if (nb <= 1)
        return (1);
    while(nb > 0)
        res *= nb--;
    return (res);
}

int main(void)
{
    printf("-6 = %d (0)\n", ft_iterative_factorial(-6));
    printf("0 = %d (1)\n", ft_iterative_factorial(0));
    printf("3 = %d (6)\n"i ft_iterative_factorial(3));
}