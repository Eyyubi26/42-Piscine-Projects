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

int ft_sqrt(int nb)
{
    int n;

    n = 1;
    if (nb > 0)
    {
        while (n * n <= nb)
        {
            if (n * n == nb)
                return (n);
            else if (n >= 46341)
                return (0);
            n++;
        }
    }
    return (0);
}

int main(void)
{
    printf("-1 = %d (0)\n", ft_sqrt(-1));
	printf(" 0 = %d (0)\n", ft_sqrt(0));
	printf(" 1 = %d (1)\n", ft_sqrt(1));
	printf(" 2 = %d (0)\n", ft_sqrt(2));
	printf(" 3 = %d (0)\n", ft_sqrt(3));
	printf(" 4 = %d (2)\n", ft_sqrt(4));
}