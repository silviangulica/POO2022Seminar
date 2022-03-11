#include "Canvas.h"
// -> Some Private Funcs
bool Canvas::CheckLimit(int Point)
{
	if ((Point <= this->Lines) && (Point >= 0))
		if ((Point <= this->Columns) && (Point >= 0)) return true;
	return false;
}


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
			Plan[i][j] = ' ';
		}
	}

	this->Lines = height;
	this->Columns = width;	
}

// -> The Draw Funcs
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	if (!(CheckLimit(left) && CheckLimit(top) && CheckLimit(right) && CheckLimit(bottom)))
	{
		printf("[Err]: The args in DrawRect are out of bound!\n"); 
		return; 
	}
	// -> Verification for args	
	if ((left < 0) or (top < 0) or (right < 0) or (bottom < 0))
	{
		printf("[Err]: The args in DrawRect are incorrect!\n"); 
		return; 
	}
	if ((left >= right) or (bottom <= top))
	{
		printf("[Err]: The args in DrawRect are incorrect!\n");
		return;	
	}
	
	for (int i = left; i <= right; i++) 	Plan[top][i] = ch;
	for (int i = top+1; i < bottom; i++)  	Plan[i][left] = ch;
	for (int i = top+1; i < bottom; i++)  	Plan[i][right] = ch;
	for (int i = left; i <= right; i++)  	Plan[bottom][i] = ch;
}
void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	if (!(CheckLimit(x) && CheckLimit(y)))
	{
		printf("[Err]: The args in DrawCircle are out of bound!\n"); 
		return; 
	}

	if ((x < 0) or (y < 0) or (ray <= 0))
	{
		printf("[Err]: The args in DrawCircle are incorrect!\n"); 
		return; 
	}

	if ((x-ray < 0) or (y-ray < 0))
	{
		printf("[Err]: The args in DrawCircle are incorrect!\n"); 
		return; 
	
	}
	int sum;
	for (int i = y - ray; i <= y+ray; i++)
	{
		for (int j = x - ray; j <= x + ray; j++)
		{
			sum = pow((i-x), 2) + pow((j-y), 2);
			if ((sum >= ray * (ray - 1)) && (sum <= ray * (ray + 1)))
				SetPoint(j, i, ch);
		}
	}
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	if(!(CheckLimit(x1) && CheckLimit(x2) && CheckLimit(y1) && CheckLimit(y2)))
	{
		printf("[Err]: The args in DrawLine are out of bound!\n");
		return;
	}

	// Assume that x1 is < than x2
 	int x = x1;	int x_final = x2;
	int y = y1;
    	int dx = x2 - x1;
    	int dy = y2 - y1;
	int Di;

	// Check for "nonconformist" args
	if(x1>x2)
    	{
	   	x = x2; y = y2; x_final = x1;
        	dx = x1-x2;
        	dy = y1-y2;
    	}
	Di = 2*dy-dx;
    	SetPoint(x,y,ch);

	// The Algo...
    	while(x < x_final)
    	{
		x++;
        	if(Di < 0)	Di += 2*dy;
        	else
        	{
           	 	y++;
            		Di += 2*(dy-dx);
        	}
        	SetPoint(x,y,ch);
     	}
}
 
// -> The Fill funcs
void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	if (!(CheckLimit(x) && CheckLimit(y)))
	{
		printf("[Err]: The args in FillCircle are out of bound!\n"); 
		return; 
	}

	if ((x < 0) or (y < 0) or (ray <= 0))
	{
		printf("[Err]: The args in FillCircle are incorrect!\n"); 
		return; 
	}

	if ((x-ray < 0) or (y-ray < 0))
	{
		printf("[Err]: The args in FillCircle are incorrect!\n"); 
		return; 
	
	}
	int sum;
	for (int i = y - ray; i <= y+ray; i++)
	{
		for (int j = x - ray; j <= x + ray; j++)
		{
			sum = pow((i-x), 2) + pow((j-y), 2);
			if (sum <= ray * (ray + 1))
				SetPoint(j, i, ch);
		}
	}
}
void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	if (!(CheckLimit(left) && CheckLimit(top) && CheckLimit(right) && CheckLimit(bottom)))
	{
		printf("[Err]: The args in FillRect are out of bound!\n"); 
		return; 
	}
	// -> Verification for args	
	if ((left < 0) or (top < 0) or (right < 0) or (bottom < 0))
	{
		printf("[Err]: The args in FillRect are incorrect!\n"); 
		return; 
	}
	if ((left >= right) or (bottom <= top))
	{
		printf("[Err]: The args in FillRect are incorrect!\n");
		return;	
	}
	
	for (int i = top; i < bottom; i++)
		for(int j = left; j < right; j++)
		{
			SetPoint(j, i, ch);
		}
}

// -> The Set Funcs
void Canvas::SetPoint(int x, int y, char ch)
{
	if (!(CheckLimit(x) && CheckLimit(y)))
	{
		printf("[Err]: The args in SetPoint are out of bound!\n"); 
		return;
	}
	this->Plan[y][x] = ch;
}

// -> The Print Funcs
void Canvas::Print() const 
{
	for(int i = 0; i < Lines; i++) 
	{
		for(int j = 0; j < Columns; j++) printf("%c", Plan[i][j]);
		printf("\n");
	}
}

// -> The Clear Funcs
void Canvas::Clear() 
{
	for(int i = 0; i < Lines; i++) 
		for(int j = 0; j < Columns; j++) this->Plan[i][j] = ' ';
}
