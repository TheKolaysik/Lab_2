#include <stdio.h>
#include <locale.h>

int del_func()
{
	printf("Дано:\n\t%3d\n\t%3d\nОтвет:\n\t%+-2d%.4f", 2, 137, 2 / 137, 2. / 137.);
}

void main()
{
	setlocale(LC_ALL, "RUS");
	del_func();
}