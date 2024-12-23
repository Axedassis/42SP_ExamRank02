#include "./flood_fill.h"

void fill (char **tab, t_point size, t_point crr, char to_fill)
{
	if(crr.y < 0 || crr.y >= size.y || crr.x < 0 || crr.x >= size.x || tab[crr.y][crr.x] != to_fill)
		return ;
	tab[crr.y][crr.x] = 'F';
	fill(tab, size, (t_point){crr.x + 1, crr.y}, to_fill);
	fill(tab, size, (t_point){crr.x - 1, crr.y}, to_fill);
	fill(tab, size, (t_point){crr.x, crr.y + 1}, to_fill);
	fill(tab, size, (t_point){crr.x, crr.y - 1}, to_fill);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

