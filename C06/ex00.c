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

int main(int ac, char **av)
{
    int c;

    c = 0;
    if (ac > 0)
    {
        while (av[0][c] != '\0')
        {
            write(1, &ac[0][c], 1);
            c++;
        }
        write(1, "\n", 1);
    }
    return (0);
}