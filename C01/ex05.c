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
#include<stdbool.h>
#include<stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    char n;

    while (true)
    {
        n = *str;
        if (n == '\0')
        {
            break;
        }
        ft_putchar(n);
        str++;
    }
}

int main(void)
{
    char    string[7];
    char    *f;

    string[0] = 'T';
    string[1] = 'U';
    string[2] = 'R';
    string[3] = 'K';
    string[4] = 'E';
    string[5] = 'Y';
    string[6] = '\0'; 
    f = &string[0];
    printf("%s\n", string);
    ft_putstr(f);
}
