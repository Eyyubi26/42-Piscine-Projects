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

int ft_recursive_power(int nb, int power)
{
    int n;

    n = nb;
    if (n > n * nb)
        return (0);
    else if (power > 1)
        return (n * ft_recursive_power(n, power - 1));
    else if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    else
        return (n);
}

int main(void)
{
    printf("-3 ^ -1 = %d (0)\n", ft_recursive_power(-3, -1));
    printf("0 ^ 0 = %d (1)\n", ft_recursive_power(0, 0));
    printf("4 ^ 2 = %d (16)\n", ft_recursive_power(4, 2));
}