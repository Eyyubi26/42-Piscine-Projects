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

void    ft_print_alphabet(void)
{
    char    alph;

    alph = 'a';
    while (alph <= 'z')
    {
        ft_putchar(alph);
        alph++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}