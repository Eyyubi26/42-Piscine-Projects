#include "../includes/bsq.h"

int	is_identical(char *eof)
{
	if (eof[0] == eof[1])
		return (-1);
	else if (eof[0] == eof[2])
		return (-1);
	else if (eof[1] == eof[2])
		return (-1);
	return (0);
}

int	get_val_eof(char *eof, char c)
{
	if (eof[0] == c)
		return (1);
	return (0);
}
