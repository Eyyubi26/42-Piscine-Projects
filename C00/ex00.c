//////////////////////////////////
/*      >>>>>>>>                */
/*                              */
/*                              */
/*      >>>>>    Piscine 42.TR  */
/*      >>        42 Istanbul   */
/*      >>                      */
/*      >>>>>>>>                */
//////////////////////////////////
#include<unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    write(1, "A", 1);
}
