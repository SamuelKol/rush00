void	ft_putchar(char c);

void print_char(int i, int j, int width, int height)
{
	char first_corner;
	char second_corner;
	char line_char;

	first_corner = 'A';
	second_corner = 'C';
	line_char = 'B';
	if( ( i == 0 && j == 0 ) || ( i == width && width > 0 && j == height && height > 0 ) )
		ft_putchar(first_corner);
	else if ( ( i == width && j == 0) || ( i == 0 && j == height ) )
		ft_putchar(second_corner);
	else
	{
		if ( i == 0 || i == width || j == 0 || j == height )
			ft_putchar( line_char );
		else
			ft_putchar( ' ' );
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while ( j < y)
	{
		while ( i < x )
		{
			print_char(i, j, x-1, y-1);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		j++;
	}
}
