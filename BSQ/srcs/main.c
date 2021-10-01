#include "../includes/bsq.h"

void	read_stdin(void)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	j = 0;
	c = 'e';
	while (read(0, &c, 1) != '\0')
	{
		if (c == '\n')
			j++;
		write(1, &c, 1);
	}
}

int	main(int argc, char *argv[])
{
	int		**map;
	int		col;
	int		*rowcol;
	int		*maxij;
	int		i;

	i = 0;
	if (argc == 1)
		read_stdin();
	while (argc > 1)
	{
		col = error(argv[++i]);
		map = read_file(argv[i], col);
		rowcol = get_g_row_col();
		maxij = find_max(map, rowcol[0], rowcol[1]);
		print_result(map, rowcol, maxij, get_g_eof());
		deallocate_2d(map, rowcol[0]);
		if (argc > 2)
			write(1, &"\n", 1);
		--argc;
	}
	return (0);
}
