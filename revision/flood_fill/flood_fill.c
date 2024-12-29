#include "./flood_fill.h"
#include <stdlib.h>
#include <stdio.h>

static void fill(char **tab, t_point size, t_point begin, char current)
{
	if(begin.y >= size.y || begin.y < 0 ||  begin.x >= size.x || begin.x < 0 || tab[begin.y][begin.x] != current)
		return;

	tab[begin.y][begin.x] = 'F';
	fill(tab, size, (t_point){begin.x + 1, begin.y}, current);
	fill(tab, size, (t_point){begin.x - 1, begin.y}, current);
	fill(tab, size, (t_point){begin.x, begin.y + 1}, current);
	fill(tab, size, (t_point){begin.x, begin.y - 1}, current);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}