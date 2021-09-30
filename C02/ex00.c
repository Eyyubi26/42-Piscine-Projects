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

char    *ft_strcpy(char *dest, char *src)
{
    int c;

    c = 0;
    while (src[c] != '\0')
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return (dest);
}

int main(void)
{
    char    source[] = "Kaynak Dizesi";
    char    destin[] = "Hedef Dize";
    char    *dest;

    printf("Önce\n\tsrc: %s\n\tdes: %s\n", source, destin);

    dest = ft_strcpy(destin, source);

    printf("Sonra\n\tsrc: %s\n\tdes: %s\n", source, dest);
    return (0);
}