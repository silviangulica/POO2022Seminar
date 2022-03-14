//
//  -> Am inceput sa folosesc linux, respectiv diff compiler
//  -> Probabil unele functii sa nu fie aplicabile pentru Visual Studio.
//

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
//
// Create an object that can print:
// 1. Circle(Empty or Filled)
// 2. Rectangle(Empty or Filled)
// 3. Line
// 4. Point
//
class Canvas
{
private:
    char** Plan;
    int Lines;
    int Columns;

    // Check if the point is in the paintable area.
    bool CheckLimit(int Point);

public:
    // Construct by giving the arguments.
    Canvas(int width, int height);

    // Use for Drawing Circles.
    void DrawCircle(int x, int y, int ray, char ch);
    
    // Use for Drawing Filled Cricles.
    void FillCircle(int x, int y, int ray, char ch);
    
    // Use for Drawing Rectangles.
    void DrawRect(int left, int top, int right, int bottom, char ch);
    
    // Use for Drawing Filled Rectangles.
    void FillRect(int left, int top, int right, int bottom, char ch);
    
    // Use for Drawing a point.
    void SetPoint(int x, int y, char ch);
    
    // Use for Drawing a line.
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    
    // Use for printing the canvas.
    void Print() const; 

    // Clear the canvas.
    void Clear(); 
};

