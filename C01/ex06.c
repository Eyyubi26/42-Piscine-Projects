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

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*(str++) != '\0')
    {
        len++;
    }
    return (len);
}

int main(void)
{
    char    string[7];
    char    *f;
    int len;

    string[0] = 'T';
    string[1] = 'U';
    string[2] = 'R';
    string[3] = 'K';
    string[4] = 'E';
    string[5] = 'Y';
    string[6] = '\0';
    f = &string[0];
    len = ft_strlen(f);
    printf("Uzunluk %d\n", len);
}