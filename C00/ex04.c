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

void    ft_is_negative(int n)
{
    int pos;
    int neg;

    pos = 'P';
    neg = 'N';
    if (n >= 0)
    {
        write(1, &pos, 1);
    }
    else
    {
        write(1, &neg, 1);
    }
}

int main(void)
{
    ft_is_negative(-2);
    return (0);
}