//////////////////////////////////
/*      >>>>>>>>                */
/*                              */
/*                              */
/*      >>>>>>   Piscine 42.TR  */
/*      >>        42 Istanbul   */
/*      >>                      */
/*      >>>>>>>>                */
//////////////////////////////////
#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char    n;

    n = '0';
    while (n <= '9')
    {
        ft_putchar(n);
        n++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}