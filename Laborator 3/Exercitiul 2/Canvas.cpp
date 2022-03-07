#include "Canvas.h"

// -> The Constructor
Canvas::Canvas(int width, int height)
{
	//
	// -> Warnings here, I do not know how to solve them.
	//
	
	// Initialize the Plan
	this->Plan = (char**)(malloc(height * sizeof(char*)));
	for (int i = 0; i < height; i++) Plan[i] = (char*)(malloc(width * sizeof(char)));

	// Make the Plan "empty"
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			Plan[i][j] = 36;
		}
	}	
}

// -> The Draw Funcs

