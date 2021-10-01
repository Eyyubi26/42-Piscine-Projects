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
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

int main(void)
{
	char    str[] = "Eyyubi";
	char    *p_str;

	p_str = str;

	int count = ft_strlen(p_str);
	
	printf("%d\n", count);
}