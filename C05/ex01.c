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

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if ( nb <= 1)
        return (1);
    else
        return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
    printf("-4 = %d (0)\n", ft_recursive_factorial(-4));
    printf("0 = %d (1)\n", ft_recursive_factorial(0));
    printf("4 = %d (24)\n", ft_recursive_factorial(4));
}