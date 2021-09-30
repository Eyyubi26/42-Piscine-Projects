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

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int c;

    c = 0;
    while ((src[c] != '\0') && (c < n))
    {
        dest[c] = src[c];
        c++;
    }
    while (c < n)
    {
        dest[c] = '\0';
        c++;
    }
    return (dest);
}

int main(void)
{
    char    src[] = "Kaynak Dizesi";
    char    dest[] = "Hedef Dize";
    unsigned int    n;

    n = 2;

    printf("Önce\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

    printf("Sonra\n\tsrc: %s\n\tdes: %s\n", src, dest);
    return (0); 
}