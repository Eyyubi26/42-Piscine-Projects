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

int ft_fibonacci(int index)
{
    int n;

    if (index == 0)
        return (0);
    else if (index == 1)
        return (1);
    else if (index > 1)
    {
        n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
        return (n);
    }
    else
        return (-1);
}

int main(void)
{
    printf("-3 = %d (-1)\n", ft_fibonacci(-3));
	printf("-1 = %d (-1)\n", ft_fibonacci(-1));
	printf(" 0 = %d (0)\n", ft_fibonacci(0));
	printf(" 1 = %d (1)\n", ft_fibonacci(1));
	printf(" 2 = %d (1)\n", ft_fibonacci(2));
	printf(" 3 = %d (2)\n", ft_fibonacci(3));
	printf(" 4 = %d (3)\n", ft_fibonacci(4));
}