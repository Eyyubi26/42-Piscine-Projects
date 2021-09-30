//////////////////////////////////
/*      >>>>>>>>                */
/*                              */
/*                              */
/*      >>>>>>   Piscine 42.TR  */
/*      >>        42 Istanbul   */
/*      >>                      */
/*      >>>>>>>>                */
//////////////////////////////////
#include<stdbool.h>
#include<unistd.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void    ft_sort_int_tab(int *tab, int size)
{
    int read_index;
    int index;
    bool    swapped;

    real_index = 0;
    while (true)
    {
        swapped = false;
        index = 0;
        while (index < size)
        {
            if (tab[index] > tab[index + 1])
            {
                ft_swap(&tab[index], &tab[index + 1]);
                swapped = true;
            }
            index++;
        }
        if (!swapped)
        {
            break;
        }
        read_index++;
    }
}

void    debug_dump_array(int number[], int size)
{
    int index;

    write(1, "[ ", 2);
    index = 0;
    while (index < size)
    {
        write(1, &number[index], 1);
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
    int number[9];
    int *f;
    int index;

    index = 0;
    while (index < 9)
    {
        numbers[index] = 9 -(index + 1);
        index++;
    }
    f = &numbers[0];
    write(1, "Önce: ", 6);
    debug_dump_array(numbers, 9);
    ft_sort_int_tab(f, 9);
    write(1, "\nSonra: ", 8);
    debug_dump_array(numbers, 9);
}