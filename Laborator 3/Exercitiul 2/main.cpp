#include <stdio.h>
#include <stdlib.h>
#include "Canvas.h"
int main()
{
	Canvas c(50, 50);
	c.DrawRect(0, 0, 49, 49, '*');
	c.DrawCircle(10, 10, 5, '*');
	c.FillCircle(30, 30, 5, '*');
	c.FillRect(45, 45, 49, 49, '.');
	c.DrawLine(0, 0, 6, 4, '*');
	c.Print();	

	
	return 0;
}
