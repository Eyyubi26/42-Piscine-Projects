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
#include<stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int index;
    int tmp;

    index = 0;
    while (index < size / 2)
    {
        tmp = tab[index];
        tab[index] = tab[size - 1 - index];
        tab[size - 1 - index] = tmp;
        index++;
    }
}

void    debug_dump_array(int numbers[], int size)
{
    int index;

    write(1, "[ ", 2);
    index = 0;
    while (index < size)
    {
        write(1, &numbers[index], 1);
        if (index != size - 1)
        {
            write(1, ", ", 2);
        }
        index++;
    }
    write(1, " ]", 2);
}

int main(void)
{
    int numbers[9];
    int *f;
    int index;

    index = 0;
    while (index < 9)
    {
        numbers[index] = index + 1;
        index++;
    }
    f = &numbers[0];
    write(1, "Önce: ", 6);
    debug_dump_array(numbers, 9);
    ft_rev_int_tab(f, 9);
    write(1, "\nSonra: ", 8);
    debug_dump_array(numbers, 9);
}