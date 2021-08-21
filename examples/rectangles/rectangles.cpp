#include<stdio.h>


// function prototypes
void draw_rectangle(int width, int height);
int  draw_rectangle_return_area(int width, int height);
void draw_hollow_rectangle(int width, int height);
int  draw_hollow_rectangle_return_area(int width, int height);
void draw_solid_line(int width);
void draw_hollow_line(int width);

int main(void) {
	int width;          // width of rectangle
	int height;         // height of rectangle
	int area;           // area of rectangle
    char response;      // accept response from user after pause
	
	// get the width and height of the rectangle from user
	printf("Enter width and height for rectangle: ");
	scanf("%i %i", &width, &height);
	
	// call the function to draw the solid rectangle
	draw_rectangle(width, height);
	
	// pause for user
    printf("\n\nPrinting solid rectangle, with area calculation\nEnter any character to continue: ");
    scanf(" %c", &response);
	
	// call the function to draw the solid rectangle and return the area of the rectangle
	area = draw_rectangle_return_area(width, height);
	
	// print area of rectangle
    printf("\nArea of rectangle: %i\n", area);
	
	// pause for user
    printf("\n\nPrinting hollow rectangle\nEnter any character to continue: ");
    scanf(" %c", &response);
    
    // call the function to draw hollow rectangle
	draw_hollow_rectangle(width, height);
    
	// pause for user
    printf("\n\nPrinting hollow rectangle with area calculated\nEnter any character to continue: ");
    scanf(" %c", &response);
	
    // call the function to draw the hollow rectangle and return the area of the rectangle
	area = draw_hollow_rectangle_return_area(width, height);
	
	// print area of rectangle
    printf("\nArea of rectangle: %i\n", area);

	return(0);
}


// draws solid rectangle
void draw_rectangle(int width, int height)
{
	// print 'height' lines
	for (int j = 1; j <= height; j++)
	{
		// print a line '*' of length 'width'
		draw_solid_line(width);
	}
}


// draws solid rectangle and returns its area
int draw_rectangle_return_area(int width, int height)
{
	draw_rectangle(width, height);
	
	return (width * height);
}


// draws hollow rectangle
void draw_hollow_rectangle(int width, int height)
{
	// draw hollow rectangle
	// we'll convert this to a function later

	// draw top line of '*'s
    draw_solid_line(width);
	
	// draw middle hollow lines: '*' spaces '*'
	// NOTE: only for 2nd through next to last line
	for(int j = 2; j < height; j++)
	{
		// draw hollow line
		draw_hollow_line(width);
	}
	
	// draw bottom line of '*'s
    draw_solid_line(width);
}  


// draws hollow rectangle and returns its area
int draw_hollow_rectangle_return_area(int width, int height)
{
	draw_hollow_rectangle(width, height);
	
	return (width * height);
}


// draws a line of '*'s for the given width
void draw_solid_line(int width)
{	
	for(int i = 1; i <= width; i++)
	{
		printf("*");
	}
	printf("\n");
}


// draws hollow line for given width: '*' spaces '*' 
void draw_hollow_line(int width)
{		
	// print leading '*'
	printf("*");
		
	// print middle spaces
	// NOTE: only for 2nd through next to last positions in line
	for (int i = 2; i < width; i++)
	{
		printf(" ");
	}
		
	// print end '*' and terminate line
	printf("*\n");
}	